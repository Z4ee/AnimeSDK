#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOUNDINGBOX_METHOD_2_E83A4FE069917330_OFFSET UNITYSDK_OFFSET(0x16FF10D0)
#define RPG_GAMECORE_BOUNDINGBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF11E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoundingBox_TypeDefinitionIndex = 16773;

	class BoundingBox : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Center; // 0x10
		::RPG::MVector3 Extents; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOUNDINGBOX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E83A4FE069917330(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoundingBox*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoundingBox*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOUNDINGBOX_METHOD_2_E83A4FE069917330_OFFSET))(a1, a2);
		}
	};
}

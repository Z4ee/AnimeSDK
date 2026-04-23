#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRASSDATA_METHOD_2_4614DD3BAE43EF0A_OFFSET UNITYSDK_OFFSET(0x1899BCD0)
#define RPG_GAMECORE_GRASSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1899BFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GrassData_TypeDefinitionIndex = 18125;

	class GrassData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 LocalPosition; // 0x10
		::RPG::MVector3 Size; // 0x1C
		::System::String* GrassAssetPath; // 0x28
		::System::Int16 GrassType; // 0x30
		::Il2CppArray<::System::String*>* GrassPrefabAssetPath; // 0x38
		::System::Byte GraphicQualityMask; // 0x40
		::System::Single VisionDistance; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRASSDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4614DD3BAE43EF0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GrassData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GrassData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRASSDATA_METHOD_2_4614DD3BAE43EF0A_OFFSET))(a1, a2);
		}
	};
}

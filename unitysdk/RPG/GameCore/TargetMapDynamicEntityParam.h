#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_METHOD_3_28AD7662C9671FD9_OFFSET UNITYSDK_OFFSET(0x177C30D0)
#define RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_METHOD_3_CC59B4EE77B2C84D_OFFSET UNITYSDK_OFFSET(0x177C31D0)
#define RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x177C31B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapDynamicEntityParam_TypeDefinitionIndex = 22247;

	class TargetMapDynamicEntityParam : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::String* DynamicKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_28AD7662C9671FD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDynamicEntityParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDynamicEntityParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_METHOD_3_28AD7662C9671FD9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CC59B4EE77B2C84D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDynamicEntityParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_METHOD_3_CC59B4EE77B2C84D_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_METHOD_3_67585A8E2A8DCC82_OFFSET UNITYSDK_OFFSET(0x1E1BC830)
#define RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_METHOD_3_79AD8B4055AA5190_OFFSET UNITYSDK_OFFSET(0x1E1BC6D0)
#define RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_METHOD_3_CC59B4EE77B2C84D_OFFSET UNITYSDK_OFFSET(0x1E1BC790)
#define RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_METHOD_3_FD4B795A666EC691_OFFSET UNITYSDK_OFFSET(0x1E1BC860)
#define RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BC780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapDynamicEntityParam_TypeDefinitionIndex = 23695;

	class TargetMapDynamicEntityParam : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::String* DynamicKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_79AD8B4055AA5190(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDynamicEntityParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDynamicEntityParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_METHOD_3_79AD8B4055AA5190_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CC59B4EE77B2C84D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDynamicEntityParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_METHOD_3_CC59B4EE77B2C84D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67585A8E2A8DCC82(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDynamicEntityParam*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDynamicEntityParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_METHOD_3_67585A8E2A8DCC82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD4B795A666EC691(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDynamicEntityParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDYNAMICENTITYPARAM_METHOD_3_FD4B795A666EC691_OFFSET))(a1, a2);
		}
	};
}

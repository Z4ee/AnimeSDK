#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETREVERSE_METHOD_3_03858B82214BD0A1_OFFSET UNITYSDK_OFFSET(0x1D5B67B0)
#define RPG_GAMECORE_TARGETREVERSE_METHOD_3_2245CBE33D7FB5BE_OFFSET UNITYSDK_OFFSET(0x1D5B6810)
#define RPG_GAMECORE_TARGETREVERSE_METHOD_3_9F195BB8308DE9EB_OFFSET UNITYSDK_OFFSET(0x1D5B6830)
#define RPG_GAMECORE_TARGETREVERSE_METHOD_3_A68F969D306BF10C_OFFSET UNITYSDK_OFFSET(0x1D5B6730)
#define RPG_GAMECORE_TARGETREVERSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B67A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetReverse_TypeDefinitionIndex = 23759;

	class TargetReverse : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A68F969D306BF10C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetReverse*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetReverse*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE_METHOD_3_A68F969D306BF10C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_03858B82214BD0A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetReverse* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetReverse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE_METHOD_3_03858B82214BD0A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2245CBE33D7FB5BE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetReverse*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetReverse*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE_METHOD_3_2245CBE33D7FB5BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9F195BB8308DE9EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetReverse* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetReverse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE_METHOD_3_9F195BB8308DE9EB_OFFSET))(a1, a2);
		}
	};
}

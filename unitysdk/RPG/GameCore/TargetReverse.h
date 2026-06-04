#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETREVERSE_METHOD_3_03858B82214BD0A1_OFFSET UNITYSDK_OFFSET(0x19D16410)
#define RPG_GAMECORE_TARGETREVERSE_METHOD_3_2F2387F12113D6A4_OFFSET UNITYSDK_OFFSET(0x19D16470)
#define RPG_GAMECORE_TARGETREVERSE_METHOD_3_9F195BB8308DE9EB_OFFSET UNITYSDK_OFFSET(0x19D164B0)
#define RPG_GAMECORE_TARGETREVERSE_METHOD_3_CEE87F8603B1E7E4_OFFSET UNITYSDK_OFFSET(0x19D16350)
#define RPG_GAMECORE_TARGETREVERSE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D163F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetReverse_TypeDefinitionIndex = 22712;

	class TargetReverse : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CEE87F8603B1E7E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetReverse*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetReverse*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE_METHOD_3_CEE87F8603B1E7E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_03858B82214BD0A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetReverse* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetReverse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE_METHOD_3_03858B82214BD0A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2F2387F12113D6A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetReverse*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetReverse*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE_METHOD_3_2F2387F12113D6A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9F195BB8308DE9EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetReverse* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetReverse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE_METHOD_3_9F195BB8308DE9EB_OFFSET))(a1, a2);
		}
	};
}

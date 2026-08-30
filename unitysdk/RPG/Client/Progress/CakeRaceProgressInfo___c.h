#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDBC3320)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDBC3350)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO___C__INIT_B__5_0_OFFSET UNITYSDK_OFFSET(0xDBC3360)

namespace RPG::Client::Progress
{
	inline static constexpr unsigned int CakeRaceProgressInfo___c_TypeDefinitionIndex = 74679;

	class CakeRaceProgressInfo___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Converter_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceProgressInfo___c_TypeDefinitionIndex)->GetStaticField(0x61B00);
		}
		static ::RPG::Client::Progress::CakeRaceProgressInfo___c** StaticGet___9()
		{
			return (::RPG::Client::Progress::CakeRaceProgressInfo___c**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceProgressInfo___c_TypeDefinitionIndex)->GetStaticField(0x61B08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _Init_b__5_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO___C__INIT_B__5_0_OFFSET))(this, a1);
		}
	};
}

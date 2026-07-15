#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193A1440)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193A1470)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO___C__INIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x193A1480)

namespace RPG::Client::Progress
{
	inline static constexpr unsigned int CakeRaceProgressInfo___c_TypeDefinitionIndex = 71372;

	class CakeRaceProgressInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Progress::CakeRaceProgressInfo___c** StaticGet___9()
		{
			return (::RPG::Client::Progress::CakeRaceProgressInfo___c**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceProgressInfo___c_TypeDefinitionIndex)->GetStaticField(0x68CF0);
		}
		static ::System::Converter_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Converter_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceProgressInfo___c_TypeDefinitionIndex)->GetStaticField(0x68CF8);
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

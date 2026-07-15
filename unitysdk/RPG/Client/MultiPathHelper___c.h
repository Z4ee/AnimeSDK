#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

class Class_1_96BF5776DE2FE31B;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MULTIPATHHELPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19086760)
#define RPG_CLIENT_MULTIPATHHELPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19086790)
#define RPG_CLIENT_MULTIPATHHELPER___C__GETMULTIPATHAVATARTYPESBYROLE_B__13_0_OFFSET UNITYSDK_OFFSET(0x190867A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathHelper___c_TypeDefinitionIndex = 59885;

	class MultiPathHelper___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MultiPathHelper___c** StaticGet___9()
		{
			return (::RPG::Client::MultiPathHelper___c**)Il2CppClass::FromTypeDefinitionIndex(MultiPathHelper___c_TypeDefinitionIndex)->GetStaticField(0x5DCC0);
		}
		static ::System::Func_2<::Class_1_96BF5776DE2FE31B*, ::Enum_3_DFCB42601400F441>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::Class_1_96BF5776DE2FE31B*, ::Enum_3_DFCB42601400F441>**)Il2CppClass::FromTypeDefinitionIndex(MultiPathHelper___c_TypeDefinitionIndex)->GetStaticField(0x5DCC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER___C__CTOR_OFFSET))(this);
		}

		::Enum_3_DFCB42601400F441 _GetMultiPathAvatarTypesByRole_b__13_0(::Class_1_96BF5776DE2FE31B* a1)
		{
			return ((::Enum_3_DFCB42601400F441(*)(::PVOID, ::Class_1_96BF5776DE2FE31B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER___C__GETMULTIPATHAVATARTYPESBYROLE_B__13_0_OFFSET))(this, a1);
		}
	};
}

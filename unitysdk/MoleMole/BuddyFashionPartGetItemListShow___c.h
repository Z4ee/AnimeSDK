#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1623A5D0)
#define MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1623A610)
#define MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW___C__DOPROCESS_B__1_0_OFFSET UNITYSDK_OFFSET(0x1623A620)

namespace MoleMole
{
	inline static constexpr unsigned int BuddyFashionPartGetItemListShow___c_TypeDefinitionIndex = 60540;

	class BuddyFashionPartGetItemListShow___c : public ::System::Object
	{
	public:
		static ::MoleMole::BuddyFashionPartGetItemListShow___c** StaticGet___9()
		{
			return (::MoleMole::BuddyFashionPartGetItemListShow___c**)Il2CppClass::FromTypeDefinitionIndex(BuddyFashionPartGetItemListShow___c_TypeDefinitionIndex)->GetStaticField(0x31DD0);
		}
		static ::System::Func_2<::Class_1_0D6706375CDAAE8C*, ::System::Int32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::Class_1_0D6706375CDAAE8C*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BuddyFashionPartGetItemListShow___c_TypeDefinitionIndex)->GetStaticField(0x31DD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _DoProcess_b__1_0(::Class_1_0D6706375CDAAE8C* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW___C__DOPROCESS_B__1_0_OFFSET))(this, item);
		}
	};
}

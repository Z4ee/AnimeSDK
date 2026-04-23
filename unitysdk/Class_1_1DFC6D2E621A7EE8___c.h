#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_252;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_1DFC6D2E621A7EE8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x180F1740)
#define CLASS_1_1DFC6D2E621A7EE8___C__COLLECT_B__4_0_OFFSET UNITYSDK_OFFSET(0x180F1780)
#define CLASS_1_1DFC6D2E621A7EE8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x180F1770)

inline static constexpr unsigned int Class_1_1DFC6D2E621A7EE8___c_TypeDefinitionIndex = 39584;

class Class_1_1DFC6D2E621A7EE8___c : public ::System::Object
{
public:
	static ::Class_1_1DFC6D2E621A7EE8___c** StaticGet___9()
	{
		return (::Class_1_1DFC6D2E621A7EE8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DFC6D2E621A7EE8___c_TypeDefinitionIndex)->GetStaticField(0x1360);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_252*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_252*>*>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_252*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_252*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DFC6D2E621A7EE8___c_TypeDefinitionIndex)->GetStaticField(0x1368);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_252*>* _Collect_b__4_0(::Class_0_16E4307DCC419505_252* node)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_252*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_252*))((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8___C__COLLECT_B__4_0_OFFSET))(this, node);
	}
};

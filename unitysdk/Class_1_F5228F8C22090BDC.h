#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FollowPointMapping; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F5228F8C22090BDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13684D80)
#define CLASS_1_F5228F8C22090BDC_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x13684E20)
#define CLASS_1_F5228F8C22090BDC_METHOD_1_5BEABDEB671A2571_OFFSET UNITYSDK_OFFSET(0x13684A20)
#define CLASS_1_F5228F8C22090BDC_METHOD_1_939FB33D4F7545B2_OFFSET UNITYSDK_OFFSET(0x13684B80)
#define CLASS_1_F5228F8C22090BDC_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x136849B0)
#define CLASS_1_F5228F8C22090BDC_METHOD_1_AF965D5833A685A2_OFFSET UNITYSDK_OFFSET(0x13684E30)
#define CLASS_1_F5228F8C22090BDC_METHOD_1_B501FD3352312876_OFFSET UNITYSDK_OFFSET(0x13684C90)
#define CLASS_1_F5228F8C22090BDC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13684E10)
#define CLASS_1_F5228F8C22090BDC__CTOR_OFFSET UNITYSDK_OFFSET(0x13684F80)

inline static constexpr unsigned int Class_1_F5228F8C22090BDC_TypeDefinitionIndex = 64010;

class Class_1_F5228F8C22090BDC : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5228F8C22090BDC_TypeDefinitionIndex)->GetStaticField(0x94F0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5228F8C22090BDC_TypeDefinitionIndex)->GetStaticField(0x94F4);
	}
	::System::Collections::Generic::List_1<::RPG::Client::FollowPointMapping*>* Field_1_2; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5228F8C22090BDC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5228F8C22090BDC_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_5BEABDEB671A2571(::RPG::Client::FollowPointMapping* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FollowPointMapping*))((::PBYTE)hIl2Cpp + CLASS_1_F5228F8C22090BDC_METHOD_1_5BEABDEB671A2571_OFFSET))(this, a1);
	}

	::System::Void Method_1_939FB33D4F7545B2(::RPG::Client::FollowPointMapping* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FollowPointMapping*))((::PBYTE)hIl2Cpp + CLASS_1_F5228F8C22090BDC_METHOD_1_939FB33D4F7545B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_B501FD3352312876(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F5228F8C22090BDC_METHOD_1_B501FD3352312876_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5228F8C22090BDC_DISPOSE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5228F8C22090BDC_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	static ::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5228F8C22090BDC_METHOD_1_5323F2DF46A044DA_OFFSET))();
	}

	static ::System::Void Method_1_AF965D5833A685A2(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F5228F8C22090BDC_METHOD_1_AF965D5833A685A2_OFFSET))(a1, a2);
	}
};

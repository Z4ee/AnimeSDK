#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0288E507E2813FBB.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_389;
namespace RPG::GameCore { class TargetAliasConfigList; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_A2676017449DD4A1_METHOD_1_0ABB521429DDF8A5_OFFSET UNITYSDK_OFFSET(0x10BA78D0)
#define CLASS_1_A2676017449DD4A1_METHOD_1_6913D691D3C92250_OFFSET UNITYSDK_OFFSET(0x10BA74B0)
#define CLASS_1_A2676017449DD4A1_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x10BA7310)
#define CLASS_1_A2676017449DD4A1_METHOD_1_86F643F491980593_OFFSET UNITYSDK_OFFSET(0x10BA7C70)
#define CLASS_1_A2676017449DD4A1_METHOD_1_A88B36294D55B85C_OFFSET UNITYSDK_OFFSET(0x10BA7B00)
#define CLASS_1_A2676017449DD4A1_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x10BA8170)
#define CLASS_1_A2676017449DD4A1__CCTOR_OFFSET UNITYSDK_OFFSET(0x10BA81F0)

inline static constexpr unsigned int Class_1_A2676017449DD4A1_TypeDefinitionIndex = 45458;

class Class_1_A2676017449DD4A1 : public ::System::Object
{
public:
	static ::RPG::GameCore::TargetAliasConfigList** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::TargetAliasConfigList**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2676017449DD4A1_TypeDefinitionIndex)->GetStaticField(0x48170);
	}
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_0_16E4307DCC419505_389*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_0_16E4307DCC419505_389*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2676017449DD4A1_TypeDefinitionIndex)->GetStaticField(0x48178);
	}
	static ::System::Collections::Generic::HashSet_1<::Struct_2_0288E507E2813FBB>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::HashSet_1<::Struct_2_0288E507E2813FBB>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2676017449DD4A1_TypeDefinitionIndex)->GetStaticField(0x48180);
	}
	// static const ::System::String* Field_1_3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2676017449DD4A1__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2676017449DD4A1_METHOD_1_79830F666EE579C0_OFFSET))();
	}

	static ::System::Void Method_1_6913D691D3C92250(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A2676017449DD4A1_METHOD_1_6913D691D3C92250_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0ABB521429DDF8A5(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A2676017449DD4A1_METHOD_1_0ABB521429DDF8A5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A88B36294D55B85C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2676017449DD4A1_METHOD_1_A88B36294D55B85C_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_389* Method_1_86F643F491980593(::Struct_2_0288E507E2813FBB a1)
	{
		return ((::Class_0_16E4307DCC419505_389*(*)(::Struct_2_0288E507E2813FBB))((::PBYTE)hIl2Cpp + CLASS_1_A2676017449DD4A1_METHOD_1_86F643F491980593_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2676017449DD4A1_METHOD_1_CE18697B63E52504_OFFSET))();
	}
};

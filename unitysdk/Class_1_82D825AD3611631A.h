#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHitData; }
namespace MoleMole::Config { class ConfigHitDatas; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_82D825AD3611631A_METHOD_1_0B92A4DCE840CB1E_OFFSET UNITYSDK_OFFSET(0x15483090)
#define CLASS_1_82D825AD3611631A_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0x15482E10)
#define CLASS_1_82D825AD3611631A_METHOD_1_4BFE4240535C31C9_OFFSET UNITYSDK_OFFSET(0x15482D10)
#define CLASS_1_82D825AD3611631A_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x154831A0)
#define CLASS_1_82D825AD3611631A_METHOD_1_706F2AA3533CAA3A_OFFSET UNITYSDK_OFFSET(0x154826A0)
#define CLASS_1_82D825AD3611631A__CCTOR_OFFSET UNITYSDK_OFFSET(0x15482690)

inline static constexpr unsigned int Class_1_82D825AD3611631A_TypeDefinitionIndex = 40452;

class Class_1_82D825AD3611631A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHitData*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHitData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_82D825AD3611631A_TypeDefinitionIndex)->GetStaticField(0x4D140);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_82D825AD3611631A__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_706F2AA3533CAA3A(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHitDatas*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHitDatas*>*))((::PBYTE)hIl2Cpp + CLASS_1_82D825AD3611631A_METHOD_1_706F2AA3533CAA3A_OFFSET))(a1);
	}

	static ::System::Void Method_1_4BFE4240535C31C9(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_82D825AD3611631A_METHOD_1_4BFE4240535C31C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigHitData* Method_1_0B92A4DCE840CB1E(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigHitData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_82D825AD3611631A_METHOD_1_0B92A4DCE840CB1E_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_82D825AD3611631A_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_82D825AD3611631A_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}
};

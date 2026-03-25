#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1926A62A9D02FD7E_METHOD_1_0B30FEBCDD9ECB04_OFFSET UNITYSDK_OFFSET(0x113350F0)
#define CLASS_1_1926A62A9D02FD7E_METHOD_1_38ADBE8F959BD279_OFFSET UNITYSDK_OFFSET(0x11334FB0)
#define CLASS_1_1926A62A9D02FD7E_METHOD_1_3EBF4FBC8372DCD2_OFFSET UNITYSDK_OFFSET(0x11335000)
#define CLASS_1_1926A62A9D02FD7E_METHOD_1_54BC131C08FA6CA4_OFFSET UNITYSDK_OFFSET(0x11334F60)
#define CLASS_1_1926A62A9D02FD7E_METHOD_1_70F745C7A9956211_OFFSET UNITYSDK_OFFSET(0x113356A0)
#define CLASS_1_1926A62A9D02FD7E_METHOD_1_8864D179D86560B7_1_OFFSET UNITYSDK_OFFSET(0x11335600)
#define CLASS_1_1926A62A9D02FD7E_METHOD_1_8864D179D86560B7_2_OFFSET UNITYSDK_OFFSET(0x11335650)
#define CLASS_1_1926A62A9D02FD7E_METHOD_1_8864D179D86560B7_OFFSET UNITYSDK_OFFSET(0x113355B0)
#define CLASS_1_1926A62A9D02FD7E_METHOD_1_BE9DCA4DCFC2F0FF_OFFSET UNITYSDK_OFFSET(0x11335320)
#define CLASS_1_1926A62A9D02FD7E__CCTOR_OFFSET UNITYSDK_OFFSET(0x113357F0)

inline static constexpr unsigned int Class_1_1926A62A9D02FD7E_TypeDefinitionIndex = 46534;

class Class_1_1926A62A9D02FD7E : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::AttackDamageType>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::RPG::GameCore::AttackDamageType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1926A62A9D02FD7E_TypeDefinitionIndex)->GetStaticField(0x2F320);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1926A62A9D02FD7E__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_54BC131C08FA6CA4(::RPG::GameCore::AttackDamageType a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::AttackDamageType, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_1926A62A9D02FD7E_METHOD_1_54BC131C08FA6CA4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_38ADBE8F959BD279(::RPG::GameCore::AttackDamageType& a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AttackDamageType&))((::PBYTE)hIl2Cpp + CLASS_1_1926A62A9D02FD7E_METHOD_1_38ADBE8F959BD279_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::AttackDamageType>* Method_1_3EBF4FBC8372DCD2(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AttackDamageType>*(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_1926A62A9D02FD7E_METHOD_1_3EBF4FBC8372DCD2_OFFSET))(a1);
	}

	static ::System::Void Method_1_0B30FEBCDD9ECB04(::RPG::GameCore::AttackDamageType a1, ::System::Collections::Generic::List_1<::RPG::GameCore::AttackDamageType>*& a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::AttackDamageType, ::System::Collections::Generic::List_1<::RPG::GameCore::AttackDamageType>*&))((::PBYTE)hIl2Cpp + CLASS_1_1926A62A9D02FD7E_METHOD_1_0B30FEBCDD9ECB04_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::AttackDamageType Method_1_BE9DCA4DCFC2F0FF(::System::Collections::Generic::IList_1<::RPG::GameCore::AttackDamageType>* a1)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::System::Collections::Generic::IList_1<::RPG::GameCore::AttackDamageType>*))((::PBYTE)hIl2Cpp + CLASS_1_1926A62A9D02FD7E_METHOD_1_BE9DCA4DCFC2F0FF_OFFSET))(a1);
	}

	static ::RPG::GameCore::AttackDamageType Method_1_8864D179D86560B7(::RPG::GameCore::AttackDamageType& a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::AttackDamageType&, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_1926A62A9D02FD7E_METHOD_1_8864D179D86560B7_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::AttackDamageType Method_1_8864D179D86560B7_1(::RPG::GameCore::AttackDamageType& a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::AttackDamageType&, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_1926A62A9D02FD7E_METHOD_1_8864D179D86560B7_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::AttackDamageType Method_1_8864D179D86560B7_2(::RPG::GameCore::AttackDamageType& a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::AttackDamageType&, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_1926A62A9D02FD7E_METHOD_1_8864D179D86560B7_2_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_70F745C7A9956211(::RPG::GameCore::AttackDamageType& a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::AttackDamageType&))((::PBYTE)hIl2Cpp + CLASS_1_1926A62A9D02FD7E_METHOD_1_70F745C7A9956211_OFFSET))(a1);
	}
};

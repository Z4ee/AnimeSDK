#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9535F9626F649D5D_METHOD_1_38ADBE8F959BD279_OFFSET UNITYSDK_OFFSET(0x18FD2F30)
#define CLASS_1_9535F9626F649D5D_METHOD_1_3EBF4FBC8372DCD2_OFFSET UNITYSDK_OFFSET(0x18FD2F80)
#define CLASS_1_9535F9626F649D5D_METHOD_1_54BC131C08FA6CA4_OFFSET UNITYSDK_OFFSET(0x18FD2EE0)
#define CLASS_1_9535F9626F649D5D_METHOD_1_70F745C7A9956211_OFFSET UNITYSDK_OFFSET(0x18FD37C0)
#define CLASS_1_9535F9626F649D5D_METHOD_1_8864D179D86560B7_1_OFFSET UNITYSDK_OFFSET(0x18FD3720)
#define CLASS_1_9535F9626F649D5D_METHOD_1_8864D179D86560B7_2_OFFSET UNITYSDK_OFFSET(0x18FD3770)
#define CLASS_1_9535F9626F649D5D_METHOD_1_8864D179D86560B7_OFFSET UNITYSDK_OFFSET(0x18FD36D0)
#define CLASS_1_9535F9626F649D5D_METHOD_1_B4626EFF691BB41B_OFFSET UNITYSDK_OFFSET(0x18FD3070)
#define CLASS_1_9535F9626F649D5D_METHOD_1_DDF2DEDFBB926369_OFFSET UNITYSDK_OFFSET(0x18FD32F0)
#define CLASS_1_9535F9626F649D5D__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FD3900)

inline static constexpr unsigned int Class_1_9535F9626F649D5D_TypeDefinitionIndex = 57886;

class Class_1_9535F9626F649D5D : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::AttackDamageType>** StaticGet_IAAOPGHILDN()
	{
		return (::Il2CppArray<::RPG::GameCore::AttackDamageType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9535F9626F649D5D_TypeDefinitionIndex)->GetStaticField(0x35F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9535F9626F649D5D__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_54BC131C08FA6CA4(::RPG::GameCore::AttackDamageType a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::AttackDamageType, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_9535F9626F649D5D_METHOD_1_54BC131C08FA6CA4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_38ADBE8F959BD279(::RPG::GameCore::AttackDamageType& a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AttackDamageType&))((::PBYTE)hIl2Cpp + CLASS_1_9535F9626F649D5D_METHOD_1_38ADBE8F959BD279_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::AttackDamageType>* Method_1_3EBF4FBC8372DCD2(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::AttackDamageType>*(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_9535F9626F649D5D_METHOD_1_3EBF4FBC8372DCD2_OFFSET))(a1);
	}

	static ::System::Void Method_1_B4626EFF691BB41B(::RPG::GameCore::AttackDamageType a1, ::System::Collections::Generic::List_1<::RPG::GameCore::AttackDamageType>*& a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::AttackDamageType, ::System::Collections::Generic::List_1<::RPG::GameCore::AttackDamageType>*&))((::PBYTE)hIl2Cpp + CLASS_1_9535F9626F649D5D_METHOD_1_B4626EFF691BB41B_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::AttackDamageType Method_1_DDF2DEDFBB926369(::System::Collections::Generic::IList_1<::RPG::GameCore::AttackDamageType>* a1)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::System::Collections::Generic::IList_1<::RPG::GameCore::AttackDamageType>*))((::PBYTE)hIl2Cpp + CLASS_1_9535F9626F649D5D_METHOD_1_DDF2DEDFBB926369_OFFSET))(a1);
	}

	static ::RPG::GameCore::AttackDamageType Method_1_8864D179D86560B7(::RPG::GameCore::AttackDamageType& a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::AttackDamageType&, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_9535F9626F649D5D_METHOD_1_8864D179D86560B7_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::AttackDamageType Method_1_8864D179D86560B7_1(::RPG::GameCore::AttackDamageType& a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::AttackDamageType&, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_9535F9626F649D5D_METHOD_1_8864D179D86560B7_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::AttackDamageType Method_1_8864D179D86560B7_2(::RPG::GameCore::AttackDamageType& a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::AttackDamageType&, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_9535F9626F649D5D_METHOD_1_8864D179D86560B7_2_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_70F745C7A9956211(::RPG::GameCore::AttackDamageType& a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::AttackDamageType&))((::PBYTE)hIl2Cpp + CLASS_1_9535F9626F649D5D_METHOD_1_70F745C7A9956211_OFFSET))(a1);
	}
};

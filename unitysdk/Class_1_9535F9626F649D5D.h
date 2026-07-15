#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9535F9626F649D5D_METHOD_1_38ADBE8F959BD279_OFFSET UNITYSDK_OFFSET(0x188C2760)
#define CLASS_1_9535F9626F649D5D_METHOD_1_3EBF4FBC8372DCD2_OFFSET UNITYSDK_OFFSET(0x188C27B0)
#define CLASS_1_9535F9626F649D5D_METHOD_1_54BC131C08FA6CA4_OFFSET UNITYSDK_OFFSET(0x188C2710)
#define CLASS_1_9535F9626F649D5D_METHOD_1_70F745C7A9956211_OFFSET UNITYSDK_OFFSET(0x188C2FF0)
#define CLASS_1_9535F9626F649D5D_METHOD_1_8864D179D86560B7_1_OFFSET UNITYSDK_OFFSET(0x188C2F50)
#define CLASS_1_9535F9626F649D5D_METHOD_1_8864D179D86560B7_2_OFFSET UNITYSDK_OFFSET(0x188C2FA0)
#define CLASS_1_9535F9626F649D5D_METHOD_1_8864D179D86560B7_OFFSET UNITYSDK_OFFSET(0x188C2F00)
#define CLASS_1_9535F9626F649D5D_METHOD_1_B4626EFF691BB41B_OFFSET UNITYSDK_OFFSET(0x188C28A0)
#define CLASS_1_9535F9626F649D5D_METHOD_1_DDF2DEDFBB926369_OFFSET UNITYSDK_OFFSET(0x188C2B20)
#define CLASS_1_9535F9626F649D5D__CCTOR_OFFSET UNITYSDK_OFFSET(0x188C3130)

inline static constexpr unsigned int Class_1_9535F9626F649D5D_TypeDefinitionIndex = 55163;

class Class_1_9535F9626F649D5D : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::AttackDamageType>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::RPG::GameCore::AttackDamageType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9535F9626F649D5D_TypeDefinitionIndex)->GetStaticField(0x47C60);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LevelEndType.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { template <typename T1, typename T2> class TwoDiffValue_2; }
namespace MoleMole::Config { class ConfigLevelEndCameraEffect; }
namespace MoleMole::Config { class ConfigLevelEndPerform; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7025DDE9124992DF_METHOD_1_05C89388A95DE454_OFFSET UNITYSDK_OFFSET(0x15883400)
#define CLASS_1_7025DDE9124992DF_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x15883710)
#define CLASS_1_7025DDE9124992DF_METHOD_1_3150507749BCEAEC_1_OFFSET UNITYSDK_OFFSET(0x158839F0)
#define CLASS_1_7025DDE9124992DF_METHOD_1_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x15883930)
#define CLASS_1_7025DDE9124992DF_METHOD_1_43B9391D2C9E5286_OFFSET UNITYSDK_OFFSET(0x15883C00)
#define CLASS_1_7025DDE9124992DF_METHOD_1_89FB6C25B631ACFF_OFFSET UNITYSDK_OFFSET(0x15883DF0)
#define CLASS_1_7025DDE9124992DF_METHOD_1_903A14AA963C4C88_OFFSET UNITYSDK_OFFSET(0x15883450)
#define CLASS_1_7025DDE9124992DF_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x15883D00)
#define CLASS_1_7025DDE9124992DF_METHOD_1_B1DC92A9424F426F_OFFSET UNITYSDK_OFFSET(0x15883990)
#define CLASS_1_7025DDE9124992DF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x15883BA0)
#define CLASS_1_7025DDE9124992DF_METHOD_1_CFF3ADD231389EB7_OFFSET UNITYSDK_OFFSET(0x15883C10)
#define CLASS_1_7025DDE9124992DF_METHOD_1_DB80046EF6F98E75_OFFSET UNITYSDK_OFFSET(0x15883A90)
#define CLASS_1_7025DDE9124992DF_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x15883A50)

inline static constexpr unsigned int Class_1_7025DDE9124992DF_TypeDefinitionIndex = 70325;

class Class_1_7025DDE9124992DF : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigLevelEndPerform** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigLevelEndPerform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7025DDE9124992DF_TypeDefinitionIndex)->GetStaticField(0x367B0);
	}

	static ::System::String* Method_1_05C89388A95DE454(::MoleMole::Config::LevelEndType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::LevelEndType))((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_METHOD_1_05C89388A95DE454_OFFSET))(a1);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_3150507749BCEAEC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_METHOD_1_3150507749BCEAEC_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Config::MaterialPropertyType>* Method_1_B1DC92A9424F426F()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::MaterialPropertyType>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_METHOD_1_B1DC92A9424F426F_OFFSET))();
	}

	static ::System::Single Method_1_3150507749BCEAEC_1()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_METHOD_1_3150507749BCEAEC_1_OFFSET))();
	}

	static ::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_METHOD_1_FB4BE762B6186C23_OFFSET))();
	}

	static ::System::Single Method_1_DB80046EF6F98E75(::MoleMole::Config::LevelEndType a1)
	{
		return ((::System::Single(*)(::MoleMole::Config::LevelEndType))((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_METHOD_1_DB80046EF6F98E75_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::MoleMole::Config::ConfigLevelEndPerform* Method_1_43B9391D2C9E5286()
	{
		return ((::MoleMole::Config::ConfigLevelEndPerform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_METHOD_1_43B9391D2C9E5286_OFFSET))();
	}

	static ::System::String* Method_1_903A14AA963C4C88(::MoleMole::Config::LevelEndType a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::System::String*(*)(::MoleMole::Config::LevelEndType, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_METHOD_1_903A14AA963C4C88_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::TwoDiffValue_2<::System::String*, ::System::Boolean>* Method_1_CFF3ADD231389EB7(::MoleMole::Config::LevelEndType a1)
	{
		return ((::MoleMole::TwoDiffValue_2<::System::String*, ::System::Boolean>*(*)(::MoleMole::Config::LevelEndType))((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_METHOD_1_CFF3ADD231389EB7_OFFSET))(a1);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelEndCameraEffect*>* Method_1_89FB6C25B631ACFF(::MoleMole::Config::LevelEndType a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelEndCameraEffect*>*(*)(::MoleMole::Config::LevelEndType))((::PBYTE)hIl2Cpp + CLASS_1_7025DDE9124992DF_METHOD_1_89FB6C25B631ACFF_OFFSET))(a1);
	}
};

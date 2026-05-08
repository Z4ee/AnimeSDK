#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/Config/LevelEndType.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_273;
class Class_1_522B0BB3ABD42EF0;
class Class_2_888C59F77423C576_2;
class Class_3_EA02B975BED3466B;
namespace MoleMole { template <typename T1, typename T2> class TwoDiffValue_2; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigLevelEndCameraEffect; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D889535C119D43AF_METHOD_1_29839FFC11E6037F_OFFSET UNITYSDK_OFFSET(0xD470CD0)
#define CLASS_1_D889535C119D43AF_METHOD_1_34D4CC9E81162C11_OFFSET UNITYSDK_OFFSET(0xD46EDF0)
#define CLASS_1_D889535C119D43AF_METHOD_1_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0xD471AC0)
#define CLASS_1_D889535C119D43AF_METHOD_1_4EBC9684B2E2CE60_OFFSET UNITYSDK_OFFSET(0xD46EA40)
#define CLASS_1_D889535C119D43AF_METHOD_1_72A7D7EB6D1C137E_OFFSET UNITYSDK_OFFSET(0xD470370)
#define CLASS_1_D889535C119D43AF_METHOD_1_91982360B2E3D3FE_OFFSET UNITYSDK_OFFSET(0xD46FF80)
#define CLASS_1_D889535C119D43AF_METHOD_1_92DA0F9E20E9E209_OFFSET UNITYSDK_OFFSET(0xD471EE0)
#define CLASS_1_D889535C119D43AF_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0xD4719D0)
#define CLASS_1_D889535C119D43AF_METHOD_1_9E380911998A73AF_OFFSET UNITYSDK_OFFSET(0xD46E9A0)
#define CLASS_1_D889535C119D43AF_METHOD_1_AC9285765D261A18_OFFSET UNITYSDK_OFFSET(0xD4709A0)
#define CLASS_1_D889535C119D43AF_METHOD_1_C7B21BDCED69311E_OFFSET UNITYSDK_OFFSET(0xD4709F0)
#define CLASS_1_D889535C119D43AF_METHOD_1_D8306CB4DB3646DD_OFFSET UNITYSDK_OFFSET(0xD471F50)
#define CLASS_1_D889535C119D43AF_METHOD_1_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0xD46EC50)
#define CLASS_1_D889535C119D43AF_METHOD_1_E2BCD1B56132A826_OFFSET UNITYSDK_OFFSET(0xD470E90)
#define CLASS_1_D889535C119D43AF_METHOD_1_EA617CEE9C8AE012_OFFSET UNITYSDK_OFFSET(0xD471DF0)
#define CLASS_1_D889535C119D43AF_METHOD_1_F915A4FFE4DDA7BF_OFFSET UNITYSDK_OFFSET(0xD471710)
#define CLASS_1_D889535C119D43AF_METHOD_1_FFD65E4FEAD3C019_OFFSET UNITYSDK_OFFSET(0xD471330)
#define CLASS_1_D889535C119D43AF__CCTOR_OFFSET UNITYSDK_OFFSET(0xD46E990)

inline static constexpr unsigned int Class_1_D889535C119D43AF_TypeDefinitionIndex = 81778;

class Class_1_D889535C119D43AF : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D889535C119D43AF_TypeDefinitionIndex)->GetStaticField(0xECC0);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_9E380911998A73AF()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_9E380911998A73AF_OFFSET))();
	}

	static ::System::Void Method_1_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_DA37DFE3A5BDA9F4_OFFSET))();
	}

	static ::System::Void Method_1_34D4CC9E81162C11(::Class_3_EA02B975BED3466B* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_EA02B975BED3466B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_34D4CC9E81162C11_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::LevelEndType Method_1_C7B21BDCED69311E()
	{
		return ((::MoleMole::Config::LevelEndType(*)())((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_C7B21BDCED69311E_OFFSET))();
	}

	static ::System::Void Method_1_72A7D7EB6D1C137E(::Class_3_EA02B975BED3466B* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::MaterialPropertyType>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_EA02B975BED3466B*, ::System::Collections::Generic::List_1<::MoleMole::Config::MaterialPropertyType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_72A7D7EB6D1C137E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_29839FFC11E6037F(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_29839FFC11E6037F_OFFSET))(a1);
	}

	static ::System::Void Method_1_E2BCD1B56132A826()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_E2BCD1B56132A826_OFFSET))();
	}

	static ::System::Boolean Method_1_4EBC9684B2E2CE60(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_4EBC9684B2E2CE60_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_AC9285765D261A18(::Class_1_522B0BB3ABD42EF0* a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::Class_1_522B0BB3ABD42EF0*))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_AC9285765D261A18_OFFSET))(a1);
	}

	static ::System::Void Method_1_FFD65E4FEAD3C019()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_FFD65E4FEAD3C019_OFFSET))();
	}

	static ::System::String* Method_1_F915A4FFE4DDA7BF(::Class_3_EA02B975BED3466B* a1)
	{
		return ((::System::String*(*)(::Class_3_EA02B975BED3466B*))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_F915A4FFE4DDA7BF_OFFSET))(a1);
	}

	static ::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_99D60EF23C904C6D_OFFSET))();
	}

	static ::System::Boolean Method_1_4487776BEE04D471()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_4487776BEE04D471_OFFSET))();
	}

	static ::System::Boolean Method_1_EA617CEE9C8AE012(::Class_2_888C59F77423C576_2* a1)
	{
		return ((::System::Boolean(*)(::Class_2_888C59F77423C576_2*))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_EA617CEE9C8AE012_OFFSET))(a1);
	}

	static ::System::Void Method_1_91982360B2E3D3FE(::Class_3_EA02B975BED3466B* a1, ::MoleMole::TwoDiffValue_2<::System::String*, ::System::Boolean>*& a2, ::System::String*& a3, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelEndCameraEffect*>*& a4, ::System::Collections::Generic::List_1<::MoleMole::Config::MaterialPropertyType>*& a5, ::System::Boolean& a6)
	{
		return ((::System::Void(*)(::Class_3_EA02B975BED3466B*, ::MoleMole::TwoDiffValue_2<::System::String*, ::System::Boolean>*&, ::System::String*&, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelEndCameraEffect*>*&, ::System::Collections::Generic::List_1<::MoleMole::Config::MaterialPropertyType>*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_91982360B2E3D3FE_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid Method_1_92DA0F9E20E9E209(::System::WeakReference_1<::Class_0_16E4307DCC419505_273*>* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::System::WeakReference_1<::Class_0_16E4307DCC419505_273*>*))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_92DA0F9E20E9E209_OFFSET))(a1);
	}

	static ::System::Void Method_1_D8306CB4DB3646DD(::System::Boolean a1, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_D8306CB4DB3646DD_OFFSET))(a1, a2);
	}
};

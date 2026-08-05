#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_F42274EA38D48BB2.h"
#include "unitysdk/MoleMole/Config/LevelEndType.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_392;
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

#define CLASS_1_D889535C119D43AF_METHOD_1_061D0B80B9D8F2F6_OFFSET UNITYSDK_OFFSET(0x13CCED70)
#define CLASS_1_D889535C119D43AF_METHOD_1_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x13CD0B10)
#define CLASS_1_D889535C119D43AF_METHOD_1_4EBC9684B2E2CE60_OFFSET UNITYSDK_OFFSET(0x13CCDF70)
#define CLASS_1_D889535C119D43AF_METHOD_1_5FB0DC4E8DAA3EC5_OFFSET UNITYSDK_OFFSET(0x13CD03E0)
#define CLASS_1_D889535C119D43AF_METHOD_1_72A7D7EB6D1C137E_OFFSET UNITYSDK_OFFSET(0x13CCE180)
#define CLASS_1_D889535C119D43AF_METHOD_1_90A6B7F250B2D667_OFFSET UNITYSDK_OFFSET(0x13CD0E40)
#define CLASS_1_D889535C119D43AF_METHOD_1_91982360B2E3D3FE_OFFSET UNITYSDK_OFFSET(0x13CCFFA0)
#define CLASS_1_D889535C119D43AF_METHOD_1_92DA0F9E20E9E209_OFFSET UNITYSDK_OFFSET(0x13CD13D0)
#define CLASS_1_D889535C119D43AF_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x13CD1440)
#define CLASS_1_D889535C119D43AF_METHOD_1_9E380911998A73AF_OFFSET UNITYSDK_OFFSET(0x13CCDED0)
#define CLASS_1_D889535C119D43AF_METHOD_1_AC9285765D261A18_OFFSET UNITYSDK_OFFSET(0x13CD0390)
#define CLASS_1_D889535C119D43AF_METHOD_1_C7B21BDCED69311E_OFFSET UNITYSDK_OFFSET(0x13CCEA80)
#define CLASS_1_D889535C119D43AF_METHOD_1_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x13CD05A0)
#define CLASS_1_D889535C119D43AF_METHOD_1_D8306CB4DB3646DD_OFFSET UNITYSDK_OFFSET(0x13CD0730)
#define CLASS_1_D889535C119D43AF_METHOD_1_EA617CEE9C8AE012_OFFSET UNITYSDK_OFFSET(0x13CD12E0)
#define CLASS_1_D889535C119D43AF_METHOD_1_F915A4FFE4DDA7BF_OFFSET UNITYSDK_OFFSET(0x13CCE7C0)
#define CLASS_1_D889535C119D43AF_METHOD_1_FFD65E4FEAD3C019_OFFSET UNITYSDK_OFFSET(0x13CCDAF0)
#define CLASS_1_D889535C119D43AF__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CCDAE0)

inline static constexpr unsigned int Class_1_D889535C119D43AF_TypeDefinitionIndex = 47452;

class Class_1_D889535C119D43AF : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D889535C119D43AF_TypeDefinitionIndex)->GetStaticField(0xF440);
	}
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_FFD65E4FEAD3C019()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_FFD65E4FEAD3C019_OFFSET))();
	}

	static ::System::Boolean Method_1_9E380911998A73AF()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_9E380911998A73AF_OFFSET))();
	}

	static ::System::Void Method_1_72A7D7EB6D1C137E(::Class_3_EA02B975BED3466B* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::MaterialPropertyType>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_EA02B975BED3466B*, ::System::Collections::Generic::List_1<::MoleMole::Config::MaterialPropertyType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_72A7D7EB6D1C137E_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_F915A4FFE4DDA7BF(::Class_3_EA02B975BED3466B* a1)
	{
		return ((::System::String*(*)(::Class_3_EA02B975BED3466B*))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_F915A4FFE4DDA7BF_OFFSET))(a1);
	}

	static ::MoleMole::Config::LevelEndType Method_1_C7B21BDCED69311E()
	{
		return ((::MoleMole::Config::LevelEndType(*)())((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_C7B21BDCED69311E_OFFSET))();
	}

	static ::System::Void Method_1_061D0B80B9D8F2F6(::Class_3_EA02B975BED3466B* a1, ::System::Boolean a2, ::Enum_3_F42274EA38D48BB2 a3)
	{
		return ((::System::Void(*)(::Class_3_EA02B975BED3466B*, ::System::Boolean, ::Enum_3_F42274EA38D48BB2))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_061D0B80B9D8F2F6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5FB0DC4E8DAA3EC5(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_5FB0DC4E8DAA3EC5_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_AC9285765D261A18(::Class_1_522B0BB3ABD42EF0* a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::Class_1_522B0BB3ABD42EF0*))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_AC9285765D261A18_OFFSET))(a1);
	}

	static ::System::Void Method_1_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_CD9F3CEFB366C27A_OFFSET))();
	}

	static ::System::Boolean Method_1_4EBC9684B2E2CE60(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_4EBC9684B2E2CE60_OFFSET))(a1);
	}

	static ::System::Void Method_1_D8306CB4DB3646DD(::System::Boolean a1, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_D8306CB4DB3646DD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4487776BEE04D471()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_4487776BEE04D471_OFFSET))();
	}

	static ::System::Void Method_1_90A6B7F250B2D667(::Enum_3_F42274EA38D48BB2 a1)
	{
		return ((::System::Void(*)(::Enum_3_F42274EA38D48BB2))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_90A6B7F250B2D667_OFFSET))(a1);
	}

	static ::System::Void Method_1_91982360B2E3D3FE(::Class_3_EA02B975BED3466B* a1, ::MoleMole::TwoDiffValue_2<::System::String*, ::System::Boolean>*& a2, ::System::String*& a3, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelEndCameraEffect*>*& a4, ::System::Collections::Generic::List_1<::MoleMole::Config::MaterialPropertyType>*& a5, ::System::Boolean& a6)
	{
		return ((::System::Void(*)(::Class_3_EA02B975BED3466B*, ::MoleMole::TwoDiffValue_2<::System::String*, ::System::Boolean>*&, ::System::String*&, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelEndCameraEffect*>*&, ::System::Collections::Generic::List_1<::MoleMole::Config::MaterialPropertyType>*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_91982360B2E3D3FE_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_EA617CEE9C8AE012(::Class_2_888C59F77423C576_2* a1)
	{
		return ((::System::Boolean(*)(::Class_2_888C59F77423C576_2*))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_EA617CEE9C8AE012_OFFSET))(a1);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid Method_1_92DA0F9E20E9E209(::System::WeakReference_1<::Class_0_16E4307DCC419505_392*>* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::System::WeakReference_1<::Class_0_16E4307DCC419505_392*>*))((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_92DA0F9E20E9E209_OFFSET))(a1);
	}

	static ::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D889535C119D43AF_METHOD_1_99D60EF23C904C6D_OFFSET))();
	}
};

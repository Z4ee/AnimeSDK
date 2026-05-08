#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_93634F3CC4949B49.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_449B1BB2E3AA2D13;
class Class_1_CF69DA127BBBD8F0;
class Class_3_5BC5304C4FD62567;
class Class_3_F6E9D1CD310ACC17;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UITriggerShootResultPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_5_F7314AB7E8654428_METHOD_5_1CC1F49C95DCD42C_OFFSET UNITYSDK_OFFSET(0x12572C50)
#define CLASS_5_F7314AB7E8654428_METHOD_5_284A00008B880FD6_OFFSET UNITYSDK_OFFSET(0x125729D0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_2A202D88FC4C292F_OFFSET UNITYSDK_OFFSET(0x12572CF0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_32D09D1F157C2CE1_OFFSET UNITYSDK_OFFSET(0x12572B80)
#define CLASS_5_F7314AB7E8654428_METHOD_5_358A43E9D58CE907_OFFSET UNITYSDK_OFFSET(0x12572C40)
#define CLASS_5_F7314AB7E8654428_METHOD_5_3E95970492C02E1A_OFFSET UNITYSDK_OFFSET(0x125728F0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_4C4EBB4EB6CF0DA7_OFFSET UNITYSDK_OFFSET(0x12571C10)
#define CLASS_5_F7314AB7E8654428_METHOD_5_4D395DE7080248C4_OFFSET UNITYSDK_OFFSET(0x12571C20)
#define CLASS_5_F7314AB7E8654428_METHOD_5_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x12571DE0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_50D16A65A008CAAE_OFFSET UNITYSDK_OFFSET(0x12572B70)
#define CLASS_5_F7314AB7E8654428_METHOD_5_53F8E7A039DF377D_OFFSET UNITYSDK_OFFSET(0x12571C70)
#define CLASS_5_F7314AB7E8654428_METHOD_5_61C5AD913C0E9473_OFFSET UNITYSDK_OFFSET(0x12571BB0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x12572A10)
#define CLASS_5_F7314AB7E8654428_METHOD_5_858CF2EC5EE423D3_OFFSET UNITYSDK_OFFSET(0x12571E50)
#define CLASS_5_F7314AB7E8654428_METHOD_5_85C746F74910D9C1_OFFSET UNITYSDK_OFFSET(0x12572440)
#define CLASS_5_F7314AB7E8654428_METHOD_5_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x125724D0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_8D7EA10616F1B51A_OFFSET UNITYSDK_OFFSET(0x12572770)
#define CLASS_5_F7314AB7E8654428_METHOD_5_8FC490809D3A2947_OFFSET UNITYSDK_OFFSET(0x12572810)
#define CLASS_5_F7314AB7E8654428_METHOD_5_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x12571CC0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_97057B25DFB42EA1_OFFSET UNITYSDK_OFFSET(0x12571E60)
#define CLASS_5_F7314AB7E8654428_METHOD_5_C1EB52A4F4431ADE_OFFSET UNITYSDK_OFFSET(0x12572DC0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_C4944CF8B0C158A6_OFFSET UNITYSDK_OFFSET(0x12571F90)
#define CLASS_5_F7314AB7E8654428_METHOD_5_C528AE3EFA8FD384_OFFSET UNITYSDK_OFFSET(0x12572AA0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_C5975166282CB68A_OFFSET UNITYSDK_OFFSET(0x12572150)
#define CLASS_5_F7314AB7E8654428_METHOD_5_E1452630552839BA_OFFSET UNITYSDK_OFFSET(0x125729C0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_E718D14C1BC52C7B_OFFSET UNITYSDK_OFFSET(0x12571D20)
#define CLASS_5_F7314AB7E8654428_METHOD_5_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x12572DF0)
#define CLASS_5_F7314AB7E8654428_METHOD_5_F8D1399F1CCCBB77_OFFSET UNITYSDK_OFFSET(0x12572B60)
#define CLASS_5_F7314AB7E8654428__CTOR_OFFSET UNITYSDK_OFFSET(0x125729B0)

inline static constexpr unsigned int Class_5_F7314AB7E8654428_TypeDefinitionIndex = 59283;

class Class_5_F7314AB7E8654428 : public ::Class_4_93634F3CC4949B49
{
public:
	::MoleMole::UITriggerShootResultPageController* Field_5_4; // 0x2C0
	::System::Double Field_5_0; // 0x2C8
	::System::Double Field_5_3; // 0x2D0
	::System::Double Field_5_1; // 0x2D8
	::System::Double Field_5_2; // 0x2E0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428__CTOR_OFFSET))(this);
	}

	::System::Single Method_5_61C5AD913C0E9473()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_61C5AD913C0E9473_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_5B421F8FFABD4CA3>* Method_5_4C4EBB4EB6CF0DA7()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_5B421F8FFABD4CA3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_4C4EBB4EB6CF0DA7_OFFSET))(this);
	}

	::System::Void Method_5_4D395DE7080248C4(::Class_1_449B1BB2E3AA2D13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_449B1BB2E3AA2D13*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_4D395DE7080248C4_OFFSET))(this, a1);
	}

	::System::Void Method_5_53F8E7A039DF377D(::Class_1_CF69DA127BBBD8F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF69DA127BBBD8F0*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_53F8E7A039DF377D_OFFSET))(this, a1);
	}

	::System::Int32 Method_5_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_95780ED94B90ED36_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> Method_5_E718D14C1BC52C7B(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_E718D14C1BC52C7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_4E22A18EF530BFA8(::Class_3_5BC5304C4FD62567* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5BC5304C4FD62567*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::MoleMole::ELocalPlayType Method_5_858CF2EC5EE423D3()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_858CF2EC5EE423D3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_5_97057B25DFB42EA1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_97057B25DFB42EA1_OFFSET))(this);
	}

	::System::Void Method_5_C4944CF8B0C158A6(::Class_3_F6E9D1CD310ACC17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F6E9D1CD310ACC17*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_C4944CF8B0C158A6_OFFSET))(this, a1);
	}

	::System::Void Method_5_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Boolean Method_5_8D7EA10616F1B51A(::MoleMole::ESystemSettingType a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_8D7EA10616F1B51A_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIBaseController* Method_5_3E95970492C02E1A(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_3E95970492C02E1A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_E1452630552839BA(::Class_1_CF69DA127BBBD8F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF69DA127BBBD8F0*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_E1452630552839BA_OFFSET))(this, a1);
	}

	::System::Double Method_5_85C746F74910D9C1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_85C746F74910D9C1_OFFSET))(this);
	}

	::System::Void Method_5_6B6AE2B3E1C3264F(::Class_3_5BC5304C4FD62567* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5BC5304C4FD62567*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> Method_5_C528AE3EFA8FD384(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_C528AE3EFA8FD384_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_F8D1399F1CCCBB77(::Class_1_449B1BB2E3AA2D13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_449B1BB2E3AA2D13*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_F8D1399F1CCCBB77_OFFSET))(this, a1);
	}

	::System::Double Method_5_284A00008B880FD6()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_284A00008B880FD6_OFFSET))(this);
	}

	::System::Void Method_5_50D16A65A008CAAE(::Class_3_F6E9D1CD310ACC17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F6E9D1CD310ACC17*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_50D16A65A008CAAE_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_32D09D1F157C2CE1(::MoleMole::ESystemSettingType a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_32D09D1F157C2CE1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_5_358A43E9D58CE907()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_358A43E9D58CE907_OFFSET))(this);
	}

	static ::System::Boolean Method_5_8FC490809D3A2947(::MoleMole::ESystemSettingType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_8FC490809D3A2947_OFFSET))(a1);
	}

	::MoleMole::UIBaseController* Method_5_1CC1F49C95DCD42C(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_1CC1F49C95DCD42C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_5_2A202D88FC4C292F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_2A202D88FC4C292F_OFFSET))(this);
	}

	::System::Void Method_5_C1EB52A4F4431ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_C1EB52A4F4431ADE_OFFSET))(this);
	}

	::System::Void Method_5_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_F5447CD65612575D_OFFSET))(this);
	}

	::System::Int32 Method_5_C5975166282CB68A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F7314AB7E8654428_METHOD_5_C5975166282CB68A_OFFSET))(this);
	}
};

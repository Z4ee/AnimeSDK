#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AbyssS2_GenAreaConfigItem.h"
#include "unitysdk/MoleMole/AbyssS2_GenConfigMeta.h"
#include "unitysdk/MoleMole/AbyssS2_GenTagConfigItem.h"
#include "unitysdk/MoleMole/AbyssS2_RuntimenConfigMeta.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AbyssS2_IRNG; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4DD827ABB3971C28_METHOD_1_03B1BF2F2F8589FD_1_OFFSET UNITYSDK_OFFSET(0x17619480)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x176176E0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_0CBDBA9CA0B6BF99_OFFSET UNITYSDK_OFFSET(0x176195E0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_1659BCB6D1A9FC34_1_OFFSET UNITYSDK_OFFSET(0x17618C30)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x17616450)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_18CC28A365540467_OFFSET UNITYSDK_OFFSET(0x17616890)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_2C0A443620D4B5E2_OFFSET UNITYSDK_OFFSET(0x17617720)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_43D07ADB8B3A84C6_OFFSET UNITYSDK_OFFSET(0x17617650)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x176176A0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_5DF574466CCD0CE3_OFFSET UNITYSDK_OFFSET(0x17616F90)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x17618430)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_688702108236A8FC_1_OFFSET UNITYSDK_OFFSET(0x176193F0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_688702108236A8FC_OFFSET UNITYSDK_OFFSET(0x17616E70)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_71BA9FC96EAA27D0_OFFSET UNITYSDK_OFFSET(0x17616F00)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_7E8421BD4C2BAFFA_OFFSET UNITYSDK_OFFSET(0x17617E50)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x17617AD0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_B44D811F22C9DB74_OFFSET UNITYSDK_OFFSET(0x176179C0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_BE3C026E37192957_OFFSET UNITYSDK_OFFSET(0x176177B0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_C74F1F5106B79E79_OFFSET UNITYSDK_OFFSET(0x176173E0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_D182A069D4F35A35_OFFSET UNITYSDK_OFFSET(0x176194C0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_DEAC86EB2AD5D389_OFFSET UNITYSDK_OFFSET(0x176181C0)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_E30D25437A17FB18_OFFSET UNITYSDK_OFFSET(0x17617950)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_E9C5DEE581662A66_OFFSET UNITYSDK_OFFSET(0x17619070)
#define CLASS_1_4DD827ABB3971C28_METHOD_1_F8159D27A5B9DBC8_OFFSET UNITYSDK_OFFSET(0x17617EC0)
#define CLASS_1_4DD827ABB3971C28__CCTOR_OFFSET UNITYSDK_OFFSET(0x17616350)

inline static constexpr unsigned int Class_1_4DD827ABB3971C28_TypeDefinitionIndex = 81615;

class Class_1_4DD827ABB3971C28 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4DD827ABB3971C28_TypeDefinitionIndex)->GetStaticField(0x43E80);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4DD827ABB3971C28_TypeDefinitionIndex)->GetStaticField(0x43E88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_1659BCB6D1A9FC34_OFFSET))();
	}

	static ::System::Void Method_1_688702108236A8FC(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_688702108236A8FC_OFFSET))(a1);
	}

	static ::System::Void Method_1_71BA9FC96EAA27D0(::System::Int32 a1, ::MoleMole::AbyssS2_RuntimenConfigMeta a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::AbyssS2_RuntimenConfigMeta, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_71BA9FC96EAA27D0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5DF574466CCD0CE3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_5DF574466CCD0CE3_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenTagConfigItem>* Method_1_C74F1F5106B79E79(::System::String* a1, ::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenTagConfigItem>* a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenTagConfigItem>*(*)(::System::String*, ::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenTagConfigItem>*))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_C74F1F5106B79E79_OFFSET))(a1, a2);
	}

	static ::MoleMole::FlowCanvas::Nodes::AreaIDTag Method_1_43D07ADB8B3A84C6(::System::UInt32 a1)
	{
		return ((::MoleMole::FlowCanvas::Nodes::AreaIDTag(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_43D07ADB8B3A84C6_OFFSET))(a1);
	}

	static ::System::Void Method_1_18CC28A365540467(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_18CC28A365540467_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_2C0A443620D4B5E2(::System::Int32 a1, ::MoleMole::AbyssS2_GenConfigMeta a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::AbyssS2_GenConfigMeta, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_2C0A443620D4B5E2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_BE3C026E37192957(::System::String* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_BE3C026E37192957_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_E30D25437A17FB18(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::AbyssS2_GenConfigMeta a3)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_E30D25437A17FB18_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_B44D811F22C9DB74(::System::Collections::Generic::List_1<::System::Int32>* a1, ::MoleMole::AbyssS2_GenConfigMeta a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_B44D811F22C9DB74_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_B2C52ACF9D9B435B_OFFSET))();
	}

	static ::System::Int32 Method_1_7E8421BD4C2BAFFA(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::AbyssS2_RuntimenConfigMeta a3)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::MoleMole::AbyssS2_RuntimenConfigMeta))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_7E8421BD4C2BAFFA_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::AbyssS2_GenAreaConfigItem Method_1_F8159D27A5B9DBC8(::MoleMole::AbyssS2_IRNG* a1, ::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* a2)
	{
		return ((::MoleMole::AbyssS2_GenAreaConfigItem(*)(::MoleMole::AbyssS2_IRNG*, ::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>*))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_F8159D27A5B9DBC8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DEAC86EB2AD5D389()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_DEAC86EB2AD5D389_OFFSET))();
	}

	static ::System::Void Method_1_1659BCB6D1A9FC34_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_1659BCB6D1A9FC34_1_OFFSET))();
	}

	static ::System::Void Method_1_E9C5DEE581662A66(::System::Int32 a1, ::MoleMole::AbyssS2_GenConfigMeta a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::AbyssS2_GenConfigMeta, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_E9C5DEE581662A66_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_688702108236A8FC_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_688702108236A8FC_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_03B1BF2F2F8589FD_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_D182A069D4F35A35()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_D182A069D4F35A35_OFFSET))();
	}

	static ::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_66CC9828DB1F478F_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* Method_1_0CBDBA9CA0B6BF99(::System::String* a1, ::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>*(*)(::System::String*, ::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenAreaConfigItem>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4DD827ABB3971C28_METHOD_1_0CBDBA9CA0B6BF99_OFFSET))(a1, a2, a3);
	}
};

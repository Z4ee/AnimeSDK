#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
#include "unitysdk/System/Object.h"

class Class_1_F972F1F8974A2879;
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3C0CE2272C8848D2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA07EED0)
#define CLASS_1_3C0CE2272C8848D2_METHOD_1_0B53293E2E5E03B8_OFFSET UNITYSDK_OFFSET(0xA07F0D0)
#define CLASS_1_3C0CE2272C8848D2_METHOD_1_41BCBD63D863EBC7_OFFSET UNITYSDK_OFFSET(0xA07F180)
#define CLASS_1_3C0CE2272C8848D2_METHOD_1_82777BCF93A1C4E4_OFFSET UNITYSDK_OFFSET(0xA07F470)
#define CLASS_1_3C0CE2272C8848D2_METHOD_1_93AD5FDF788A0CCA_OFFSET UNITYSDK_OFFSET(0xA07F6D0)
#define CLASS_1_3C0CE2272C8848D2_METHOD_1_D3BE67228B7C1F4D_OFFSET UNITYSDK_OFFSET(0xA07F370)
#define CLASS_1_3C0CE2272C8848D2_METHOD_1_F072550329FC7079_OFFSET UNITYSDK_OFFSET(0xA07F580)
#define CLASS_1_3C0CE2272C8848D2_METHOD_1_FD7A11D32C061CE6_1_OFFSET UNITYSDK_OFFSET(0xA07F640)
#define CLASS_1_3C0CE2272C8848D2_METHOD_1_FD7A11D32C061CE6_OFFSET UNITYSDK_OFFSET(0xA07F040)
#define CLASS_1_3C0CE2272C8848D2__CTOR_OFFSET UNITYSDK_OFFSET(0xA07EE30)

inline static constexpr unsigned int Class_1_3C0CE2272C8848D2_TypeDefinitionIndex = 56031;

class Class_1_3C0CE2272C8848D2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F972F1F8974A2879*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ScreenTransferReason, ::Class_1_F972F1F8974A2879*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C0CE2272C8848D2__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C0CE2272C8848D2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_FD7A11D32C061CE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C0CE2272C8848D2_METHOD_1_FD7A11D32C061CE6_OFFSET))(this);
	}

	::System::Void Method_1_0B53293E2E5E03B8(::RPG::GameCore::ScreenTransferReason a1, ::System::Action* a2, ::System::Func_1<::System::Boolean>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason, ::System::Action*, ::System::Func_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3C0CE2272C8848D2_METHOD_1_0B53293E2E5E03B8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D3BE67228B7C1F4D(::RPG::GameCore::ScreenTransferReason a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Action* a5, ::System::Func_1<::System::Boolean>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason, ::System::Single, ::System::Single, ::System::Single, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_3C0CE2272C8848D2_METHOD_1_D3BE67228B7C1F4D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_82777BCF93A1C4E4(::RPG::GameCore::ScreenTransferReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + CLASS_1_3C0CE2272C8848D2_METHOD_1_82777BCF93A1C4E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD7A11D32C061CE6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C0CE2272C8848D2_METHOD_1_FD7A11D32C061CE6_1_OFFSET))(this);
	}

	::System::Boolean Method_1_93AD5FDF788A0CCA(::RPG::GameCore::ScreenTransferReason a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + CLASS_1_3C0CE2272C8848D2_METHOD_1_93AD5FDF788A0CCA_OFFSET))(this, a1);
	}

	::Class_1_F972F1F8974A2879* Method_1_F072550329FC7079(::RPG::GameCore::ScreenTransferReason a1)
	{
		return ((::Class_1_F972F1F8974A2879*(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + CLASS_1_3C0CE2272C8848D2_METHOD_1_F072550329FC7079_OFFSET))(this, a1);
	}

	::Class_1_F972F1F8974A2879* Method_1_41BCBD63D863EBC7(::RPG::GameCore::ScreenTransferReason a1)
	{
		return ((::Class_1_F972F1F8974A2879*(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + CLASS_1_3C0CE2272C8848D2_METHOD_1_41BCBD63D863EBC7_OFFSET))(this, a1);
	}
};

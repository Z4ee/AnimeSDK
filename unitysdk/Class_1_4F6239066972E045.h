#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4AC26411646E4F6D;
namespace MoleMole { class ClientSceneObjectStateLooperConfigBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4F6239066972E045_METHOD_1_0D64FB84CB8E6995_OFFSET UNITYSDK_OFFSET(0x1901E7C0)
#define CLASS_1_4F6239066972E045_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x1901E870)
#define CLASS_1_4F6239066972E045_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1901E6B0)
#define CLASS_1_4F6239066972E045_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x1901E960)
#define CLASS_1_4F6239066972E045_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1901E920)
#define CLASS_1_4F6239066972E045_METHOD_1_FD1A8012013ED9C5_OFFSET UNITYSDK_OFFSET(0x1901EA20)
#define CLASS_1_4F6239066972E045__CTOR_OFFSET UNITYSDK_OFFSET(0x1901E6A0)

inline static constexpr unsigned int Class_1_4F6239066972E045_TypeDefinitionIndex = 59469;

class Class_1_4F6239066972E045 : public ::System::Object
{
public:
	::MoleMole::ClientSceneObjectStateLooperConfigBase* Field_1_8; // 0x10
	::Class_1_4AC26411646E4F6D* Field_1_2; // 0x18
	::System::Action* Field_1_5; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>* Field_1_3; // 0x28
	::System::Action* Field_1_4; // 0x30
	::System::Int32 Field_1_6; // 0x38
	::System::Int32 Field_1_1; // 0x3C
	::System::Int32 Field_1_0; // 0x40
	::System::Int32 Field_1_7; // 0x44
	::System::Boolean Field_1_9; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F6239066972E045__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F6239066972E045_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_0D64FB84CB8E6995(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4F6239066972E045_METHOD_1_0D64FB84CB8E6995_OFFSET))(this, a1);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F6239066972E045_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F6239066972E045_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4F6239066972E045_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD1A8012013ED9C5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4F6239066972E045_METHOD_1_FD1A8012013ED9C5_OFFSET))(this, a1);
	}
};

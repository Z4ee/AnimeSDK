#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4AC26411646E4F6D;
namespace MoleMole { class ClientSceneObjectStateLooperConfigBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B10822104137A964_METHOD_1_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x18E8CB50)
#define CLASS_1_B10822104137A964_METHOD_1_9EE24AB900533354_OFFSET UNITYSDK_OFFSET(0x18E8CDC0)
#define CLASS_1_B10822104137A964_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x18E8CC00)
#define CLASS_1_B10822104137A964_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x18E8CD00)
#define CLASS_1_B10822104137A964_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18E8CF80)
#define CLASS_1_B10822104137A964_METHOD_1_FD1A8012013ED9C5_OFFSET UNITYSDK_OFFSET(0x18E8CE70)
#define CLASS_1_B10822104137A964__CTOR_OFFSET UNITYSDK_OFFSET(0x18E8CB40)

inline static constexpr unsigned int Class_1_B10822104137A964_TypeDefinitionIndex = 71149;

class Class_1_B10822104137A964 : public ::System::Object
{
public:
	::Class_1_4AC26411646E4F6D* Field_1_1; // 0x10
	::System::Action* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>* Field_1_0; // 0x20
	::System::Action* Field_1_7; // 0x28
	::MoleMole::ClientSceneObjectStateLooperConfigBase* Field_1_11; // 0x30
	::System::Boolean Field_1_10; // 0x38
	::System::Int32 Field_1_3; // 0x3C
	::System::Int32 Field_1_2; // 0x40
	::System::Int32 Field_1_5; // 0x44
	::System::Int32 Field_1_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10822104137A964__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10822104137A964_METHOD_1_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10822104137A964_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B10822104137A964_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
	}

	::System::Void Method_1_9EE24AB900533354(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B10822104137A964_METHOD_1_9EE24AB900533354_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD1A8012013ED9C5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B10822104137A964_METHOD_1_FD1A8012013ED9C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10822104137A964_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

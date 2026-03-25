#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Data/EventIndex.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2.h"

class Class_1_F19AB08624168191;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_FDDF7323404C5AC2_METHOD_2_28141171CE1C76E0_OFFSET UNITYSDK_OFFSET(0x115A53E0)
#define CLASS_2_FDDF7323404C5AC2_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x115A54E0)
#define CLASS_2_FDDF7323404C5AC2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x115A5490)
#define CLASS_2_FDDF7323404C5AC2_METHOD_2_FAD841AFDDAF7560_OFFSET UNITYSDK_OFFSET(0x115A52C0)
#define CLASS_2_FDDF7323404C5AC2__CTOR_OFFSET UNITYSDK_OFFSET(0x115A5530)

inline static constexpr unsigned int Class_2_FDDF7323404C5AC2_TypeDefinitionIndex = 60185;

class Class_2_FDDF7323404C5AC2 : public ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_2<::RPG::Client::Data::EventIndex, ::Class_1_F19AB08624168191*>*>
{
public:
	::System::Int32 Field_2_0; // 0x50
	::System::Int32 Field_2_1; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDDF7323404C5AC2__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_FAD841AFDDAF7560(::System::Action_2<::RPG::Client::Data::EventIndex, ::Class_1_F19AB08624168191*>* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Action_2<::RPG::Client::Data::EventIndex, ::Class_1_F19AB08624168191*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FDDF7323404C5AC2_METHOD_2_FAD841AFDDAF7560_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_28141171CE1C76E0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FDDF7323404C5AC2_METHOD_2_28141171CE1C76E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDDF7323404C5AC2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDDF7323404C5AC2_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}
};

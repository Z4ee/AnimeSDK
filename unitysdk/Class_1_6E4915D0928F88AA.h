#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_834;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6E4915D0928F88AA_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15271A50)
#define CLASS_1_6E4915D0928F88AA_METHOD_1_4F8C91A8E36C9915_OFFSET UNITYSDK_OFFSET(0x15271FF0)
#define CLASS_1_6E4915D0928F88AA_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x15272530)
#define CLASS_1_6E4915D0928F88AA_METHOD_1_9145D678465F3F17_OFFSET UNITYSDK_OFFSET(0x15271AB0)
#define CLASS_1_6E4915D0928F88AA_METHOD_1_9AD45FDD7EEA60D0_OFFSET UNITYSDK_OFFSET(0x152719C0)
#define CLASS_1_6E4915D0928F88AA_METHOD_1_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0x152722B0)
#define CLASS_1_6E4915D0928F88AA__CTOR_OFFSET UNITYSDK_OFFSET(0x152726D0)

inline static constexpr unsigned int Class_1_6E4915D0928F88AA_TypeDefinitionIndex = 63958;

class Class_1_6E4915D0928F88AA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_834*>* GDEEJGLLLHA; // 0x10
	::System::Int32 NCDEGDCPCHN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E4915D0928F88AA__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_834* Method_1_9AD45FDD7EEA60D0()
	{
		return ((::Class_0_16E4307DCC419505_834*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E4915D0928F88AA_METHOD_1_9AD45FDD7EEA60D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E4915D0928F88AA_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_9145D678465F3F17(::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_834*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_834*>*))((::PBYTE)hIl2Cpp + CLASS_1_6E4915D0928F88AA_METHOD_1_9145D678465F3F17_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4F8C91A8E36C9915()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E4915D0928F88AA_METHOD_1_4F8C91A8E36C9915_OFFSET))(this);
	}

	::System::Void Method_1_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E4915D0928F88AA_METHOD_1_FA0119DD445A672F_OFFSET))(this);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E4915D0928F88AA_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1A781135C1474CFC_Class_1_AFA15E0369F9D57C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1A781135C1474CFC_METHOD_1_22CAFA5E26EADCFE_OFFSET UNITYSDK_OFFSET(0x11958C40)
#define CLASS_1_1A781135C1474CFC_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11958BA0)
#define CLASS_1_1A781135C1474CFC__CTOR_OFFSET UNITYSDK_OFFSET(0x11958DB0)

inline static constexpr unsigned int Class_1_1A781135C1474CFC_TypeDefinitionIndex = 59794;

class Class_1_1A781135C1474CFC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_1A781135C1474CFC_Class_1_AFA15E0369F9D57C*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A781135C1474CFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A781135C1474CFC_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::Class_1_1A781135C1474CFC_Class_1_AFA15E0369F9D57C* Method_1_22CAFA5E26EADCFE(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::Class_1_1A781135C1474CFC_Class_1_AFA15E0369F9D57C*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1A781135C1474CFC_METHOD_1_22CAFA5E26EADCFE_OFFSET))(this, a1, a2);
	}
};

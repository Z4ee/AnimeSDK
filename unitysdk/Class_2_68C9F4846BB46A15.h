#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_68C9F4846BB46A15_METHOD_2_807FFE3DD743A0F2_OFFSET UNITYSDK_OFFSET(0x19F8ED40)
#define CLASS_2_68C9F4846BB46A15_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19F8EAF0)
#define CLASS_2_68C9F4846BB46A15_METHOD_2_FFC951FC76A760B2_OFFSET UNITYSDK_OFFSET(0x19F8EB80)
#define CLASS_2_68C9F4846BB46A15_ONSTART_OFFSET UNITYSDK_OFFSET(0x19F8EB30)
#define CLASS_2_68C9F4846BB46A15__CTOR_OFFSET UNITYSDK_OFFSET(0x19F8EB70)

inline static constexpr unsigned int Class_2_68C9F4846BB46A15_TypeDefinitionIndex = 52333;

class Class_2_68C9F4846BB46A15 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68C9F4846BB46A15__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68C9F4846BB46A15_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68C9F4846BB46A15_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_FFC951FC76A760B2(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_68C9F4846BB46A15_METHOD_2_FFC951FC76A760B2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_807FFE3DD743A0F2(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_68C9F4846BB46A15_METHOD_2_807FFE3DD743A0F2_OFFSET))(this, a1, a2);
	}
};

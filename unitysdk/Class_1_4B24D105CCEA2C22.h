#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4B24D105CCEA2C22_METHOD_1_22B630FFC8CD22E1_OFFSET UNITYSDK_OFFSET(0x10A58FD0)
#define CLASS_1_4B24D105CCEA2C22_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10A590B0)
#define CLASS_1_4B24D105CCEA2C22_METHOD_1_C315D487BB115CF9_OFFSET UNITYSDK_OFFSET(0x10A58E30)
#define CLASS_1_4B24D105CCEA2C22_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x10A58CD0)
#define CLASS_1_4B24D105CCEA2C22__CTOR_OFFSET UNITYSDK_OFFSET(0x10A59150)

inline static constexpr unsigned int Class_1_4B24D105CCEA2C22_TypeDefinitionIndex = 52240;

class Class_1_4B24D105CCEA2C22 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Action_1<::System::Object*>*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B24D105CCEA2C22__CTOR_OFFSET))(this);
	}

	::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4B24D105CCEA2C22_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C315D487BB115CF9(::System::Int32 a1, ::System::Action_1<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B24D105CCEA2C22_METHOD_1_C315D487BB115CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_22B630FFC8CD22E1(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4B24D105CCEA2C22_METHOD_1_22B630FFC8CD22E1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B24D105CCEA2C22_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};

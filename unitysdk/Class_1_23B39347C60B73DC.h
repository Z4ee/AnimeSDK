#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ButtonQTETaskInputType.h"
#include "unitysdk/MoleMole/InputActionEventType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class RealtimeQTEStyleEntryBase; }
namespace MoleMole::Config { class RealtimeQTETaskEntryBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_23B39347C60B73DC_METHOD_1_04312D3BB4D35FD8_OFFSET UNITYSDK_OFFSET(0x117902F0)
#define CLASS_1_23B39347C60B73DC_METHOD_1_1E6B5D948B290800_OFFSET UNITYSDK_OFFSET(0x1178FAD0)
#define CLASS_1_23B39347C60B73DC_METHOD_1_6C6B1DC857A4DEB1_OFFSET UNITYSDK_OFFSET(0x11790440)
#define CLASS_1_23B39347C60B73DC_METHOD_1_BA3FF423D670F592_OFFSET UNITYSDK_OFFSET(0x1178FBE0)
#define CLASS_1_23B39347C60B73DC_METHOD_1_DD73038DFA9AFB62_OFFSET UNITYSDK_OFFSET(0x117905A0)
#define CLASS_1_23B39347C60B73DC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1178F9B0)

inline static constexpr unsigned int Class_1_23B39347C60B73DC_TypeDefinitionIndex = 50668;

class Class_1_23B39347C60B73DC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTEStyleEntryBase*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTEStyleEntryBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23B39347C60B73DC_TypeDefinitionIndex)->GetStaticField(0x2A610);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTETaskEntryBase*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTETaskEntryBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23B39347C60B73DC_TypeDefinitionIndex)->GetStaticField(0x2A618);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_23B39347C60B73DC__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_1E6B5D948B290800(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_23B39347C60B73DC_METHOD_1_1E6B5D948B290800_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::RealtimeQTETaskEntryBase* Method_1_04312D3BB4D35FD8(::System::String* a1)
	{
		return ((::MoleMole::Config::RealtimeQTETaskEntryBase*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_23B39347C60B73DC_METHOD_1_04312D3BB4D35FD8_OFFSET))(a1);
	}

	static ::System::Void Method_1_BA3FF423D670F592(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_23B39347C60B73DC_METHOD_1_BA3FF423D670F592_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6C6B1DC857A4DEB1(::MoleMole::ButtonQTETaskInputType a1, ::MoleMole::LogicButtonInputType& a2, ::MoleMole::InputActionEventType& a3, ::MoleMole::InputLogicEventType& a4)
	{
		return ((::System::Boolean(*)(::MoleMole::ButtonQTETaskInputType, ::MoleMole::LogicButtonInputType&, ::MoleMole::InputActionEventType&, ::MoleMole::InputLogicEventType&))((::PBYTE)hIl2Cpp + CLASS_1_23B39347C60B73DC_METHOD_1_6C6B1DC857A4DEB1_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::RealtimeQTEStyleEntryBase* Method_1_DD73038DFA9AFB62(::System::String* a1)
	{
		return ((::MoleMole::Config::RealtimeQTEStyleEntryBase*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_23B39347C60B73DC_METHOD_1_DD73038DFA9AFB62_OFFSET))(a1);
	}
};

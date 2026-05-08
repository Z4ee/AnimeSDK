#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineData; }
namespace MoleMole { class TimelineData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F3C26C55904251F2_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0x12B80360)
#define CLASS_1_F3C26C55904251F2_METHOD_1_412237BB7E5B7EBB_OFFSET UNITYSDK_OFFSET(0x12B806F0)
#define CLASS_1_F3C26C55904251F2_METHOD_1_4BFE4240535C31C9_OFFSET UNITYSDK_OFFSET(0x12B80E80)
#define CLASS_1_F3C26C55904251F2_METHOD_1_827C472887B874F1_OFFSET UNITYSDK_OFFSET(0x12B80310)
#define CLASS_1_F3C26C55904251F2_METHOD_1_C55167FF5115C70C_OFFSET UNITYSDK_OFFSET(0x12B805F0)
#define CLASS_1_F3C26C55904251F2__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B80300)

inline static constexpr unsigned int Class_1_F3C26C55904251F2_TypeDefinitionIndex = 41681;

class Class_1_F3C26C55904251F2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TimelineData*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TimelineData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3C26C55904251F2_TypeDefinitionIndex)->GetStaticField(0x3D430);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3C26C55904251F2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TimelineData*>* Method_1_827C472887B874F1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TimelineData*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3C26C55904251F2_METHOD_1_827C472887B874F1_OFFSET))();
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F3C26C55904251F2_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::MoleMole::TimelineData* Method_1_C55167FF5115C70C(::System::String* a1)
	{
		return ((::MoleMole::TimelineData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3C26C55904251F2_METHOD_1_C55167FF5115C70C_OFFSET))(a1);
	}

	static ::System::Void Method_1_412237BB7E5B7EBB(::System::Collections::Generic::List_1<::MoleMole::ConfigTimelineData*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigTimelineData*>*))((::PBYTE)hIl2Cpp + CLASS_1_F3C26C55904251F2_METHOD_1_412237BB7E5B7EBB_OFFSET))(a1);
	}

	static ::System::Void Method_1_4BFE4240535C31C9(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3C26C55904251F2_METHOD_1_4BFE4240535C31C9_OFFSET))(a1, a2, a3, a4);
	}
};

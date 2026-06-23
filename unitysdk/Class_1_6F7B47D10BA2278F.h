#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6973444D50492F07.h"
#include "unitysdk/System/Object.h"

class Class_1_3018765A7F14BD48;
class Class_1_6F7B47D10BA2278F_Class_1_F565B3E4ABD02112;
class Class_1_6F7B47D10BA2278F_Class_1_F565B3E4ABD02112_1;
class Class_2_07CA62829CC497EC;
namespace Foundation { template <typename T> class ObjectPoolOfReusable_1; }
namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6F7B47D10BA2278F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11D7FBB0)
#define CLASS_1_6F7B47D10BA2278F_METHOD_1_33F68CBA78A78894_OFFSET UNITYSDK_OFFSET(0x11D7FD10)
#define CLASS_1_6F7B47D10BA2278F_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x11D7FC00)
#define CLASS_1_6F7B47D10BA2278F_METHOD_1_5110E061C0DF5692_OFFSET UNITYSDK_OFFSET(0x11D7FA20)
#define CLASS_1_6F7B47D10BA2278F_METHOD_1_8B71081AFDF4DBB3_OFFSET UNITYSDK_OFFSET(0x11D7F8D0)
#define CLASS_1_6F7B47D10BA2278F__CTOR_OFFSET UNITYSDK_OFFSET(0x11D7F760)

inline static constexpr unsigned int Class_1_6F7B47D10BA2278F_TypeDefinitionIndex = 41391;

class Class_1_6F7B47D10BA2278F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_07CA62829CC497EC*>* Field_1_7; // 0x10
	::Foundation::ObjectPoolOfReusable_1<::Class_2_07CA62829CC497EC*>* Field_1_5; // 0x18
	::Class_1_6F7B47D10BA2278F_Class_1_F565B3E4ABD02112* Field_1_2; // 0x20
	::Class_1_6F7B47D10BA2278F_Class_1_F565B3E4ABD02112_1* Field_1_3; // 0x28
	::Foundation::ObjectPoolOfReusable_1<::Class_2_07CA62829CC497EC*>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_2_07CA62829CC497EC*>* Field_1_6; // 0x38
	::UnityEngine::Transform* Field_1_1; // 0x40
	::MoleMole::UIWindowController* Field_1_0; // 0x48

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_6F7B47D10BA2278F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8B71081AFDF4DBB3(::Enum_3_6973444D50492F07 a1, ::Class_1_3018765A7F14BD48*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_6973444D50492F07, ::Class_1_3018765A7F14BD48*&))((::PBYTE)hIl2Cpp + CLASS_1_6F7B47D10BA2278F_METHOD_1_8B71081AFDF4DBB3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5110E061C0DF5692(::Class_1_3018765A7F14BD48*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3018765A7F14BD48*&))((::PBYTE)hIl2Cpp + CLASS_1_6F7B47D10BA2278F_METHOD_1_5110E061C0DF5692_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F7B47D10BA2278F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F7B47D10BA2278F_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_33F68CBA78A78894(::Class_1_3018765A7F14BD48*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3018765A7F14BD48*&))((::PBYTE)hIl2Cpp + CLASS_1_6F7B47D10BA2278F_METHOD_1_33F68CBA78A78894_OFFSET))(this, a1);
	}
};

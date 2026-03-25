#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_793;
class Class_1_E85115A4C331A9DA;
namespace RPG::Client { class PedestrianMemberExternalConfig_MaterialShowParts; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_98D57AECC6F6154A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1091F500)
#define CLASS_1_98D57AECC6F6154A_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x1091F6B0)
#define CLASS_1_98D57AECC6F6154A__CTOR_OFFSET UNITYSDK_OFFSET(0x1091F270)

inline static constexpr unsigned int Class_1_98D57AECC6F6154A_TypeDefinitionIndex = 56617;

class Class_1_98D57AECC6F6154A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_E85115A4C331A9DA*>* Field_1_1; // 0x10
	::RPG::Client::PedestrianMemberExternalConfig_MaterialShowParts* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::Client::PedestrianMemberExternalConfig_MaterialShowParts* a1, ::System::String* a2, ::Class_0_16E4307DCC419505_793* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PedestrianMemberExternalConfig_MaterialShowParts*, ::System::String*, ::Class_0_16E4307DCC419505_793*))((::PBYTE)hIl2Cpp + CLASS_1_98D57AECC6F6154A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98D57AECC6F6154A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98D57AECC6F6154A_METHOD_1_6BB86695870EFBD1_OFFSET))(this);
	}
};

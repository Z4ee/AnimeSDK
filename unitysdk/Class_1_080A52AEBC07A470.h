#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_080A52AEBC07A470_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x11B29840)
#define CLASS_1_080A52AEBC07A470_METHOD_1_50A65624F2CC3A85_OFFSET UNITYSDK_OFFSET(0x11B29880)
#define CLASS_1_080A52AEBC07A470__CTOR_OFFSET UNITYSDK_OFFSET(0x11B29950)

inline static constexpr unsigned int Class_1_080A52AEBC07A470_TypeDefinitionIndex = 71095;

class Class_1_080A52AEBC07A470 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_080A52AEBC07A470__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_080A52AEBC07A470_METHOD_1_128774387667156B_OFFSET))();
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_50A65624F2CC3A85(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_080A52AEBC07A470_METHOD_1_50A65624F2CC3A85_OFFSET))(this, a1, a2);
	}
};

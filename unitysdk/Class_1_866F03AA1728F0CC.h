#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_1_F964FCD89F35B351;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelRandomEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_866F03AA1728F0CC_METHOD_1_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x105CF180)
#define CLASS_1_866F03AA1728F0CC_METHOD_1_6240462CEB7A6215_OFFSET UNITYSDK_OFFSET(0x105CF290)
#define CLASS_1_866F03AA1728F0CC_METHOD_1_D576F118C43E97FE_OFFSET UNITYSDK_OFFSET(0x105CF1E0)
#define CLASS_1_866F03AA1728F0CC__CTOR_OFFSET UNITYSDK_OFFSET(0x105CF420)

inline static constexpr unsigned int Class_1_866F03AA1728F0CC_TypeDefinitionIndex = 63077;

class Class_1_866F03AA1728F0CC : public ::System::Object
{
public:
	::Class_1_F964FCD89F35B351* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_866F03AA1728F0CC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_1_866F03AA1728F0CC_METHOD_1_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_D576F118C43E97FE(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_866F03AA1728F0CC_METHOD_1_D576F118C43E97FE_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* Method_1_6240462CEB7A6215(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::ChimeraDuelRandomEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelRandomEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_866F03AA1728F0CC_METHOD_1_6240462CEB7A6215_OFFSET))(this, a1, a2);
	}
};

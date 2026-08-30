#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C28E571CD1C66CE4;
class Class_1_C852F5794E5A33A5_1;
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardPerformViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D04575A520F91692_GET_CURRENTPERFORMFORTASK_OFFSET UNITYSDK_OFFSET(0xC486600)
#define CLASS_1_D04575A520F91692_METHOD_1_6EE518C04B7D8C3B_OFFSET UNITYSDK_OFFSET(0xC486620)
#define CLASS_1_D04575A520F91692_METHOD_1_B57EC84B10E068A8_OFFSET UNITYSDK_OFFSET(0xC4866C0)
#define CLASS_1_D04575A520F91692_SET_CURRENTPERFORMFORTASK_OFFSET UNITYSDK_OFFSET(0xC486610)
#define CLASS_1_D04575A520F91692__CTOR_OFFSET UNITYSDK_OFFSET(0xC486910)

inline static constexpr unsigned int Class_1_D04575A520F91692_TypeDefinitionIndex = 79465;

class Class_1_D04575A520F91692 : public ::System::Object
{
public:
	static ::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel** StaticGet__CurrentPerformForTask_k__BackingField()
	{
		return (::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D04575A520F91692_TypeDefinitionIndex)->GetStaticField(0x56F0);
	}
	::Class_1_C28E571CD1C66CE4* DLNIGFGLPLJ; // 0x10
	::System::String* NLCHDCHBCAL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D04575A520F91692__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel* get_CurrentPerformForTask()
	{
		return ((::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D04575A520F91692_GET_CURRENTPERFORMFORTASK_OFFSET))();
	}

	static ::System::Void set_CurrentPerformForTask(::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel* a1)
	{
		return ((::System::Void(*)(::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_D04575A520F91692_SET_CURRENTPERFORMFORTASK_OFFSET))(a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>* Method_1_6EE518C04B7D8C3B()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::TeamViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D04575A520F91692_METHOD_1_6EE518C04B7D8C3B_OFFSET))(this);
	}

	::System::Void Method_1_B57EC84B10E068A8(::System::String* a1, ::Class_1_C852F5794E5A33A5_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_C852F5794E5A33A5_1*))((::PBYTE)hIl2Cpp + CLASS_1_D04575A520F91692_METHOD_1_B57EC84B10E068A8_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole { class TgsPvLegIkController; }
namespace RootMotion { class SolverManager_PostLateUpdateDelegate; }
namespace RootMotion::FinalIK { class GrounderIK; }
namespace RootMotion::FinalIK { class Grounder_GrounderDelegate; }
namespace RootMotion::FinalIK { class LegIK; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F29FF2F0F1D4B205_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x118F4A70)
#define CLASS_3_F29FF2F0F1D4B205_METHOD_3_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x118F5EC0)
#define CLASS_3_F29FF2F0F1D4B205_METHOD_3_3D42A0AC2602D380_OFFSET UNITYSDK_OFFSET(0x118F4E30)
#define CLASS_3_F29FF2F0F1D4B205_METHOD_3_49964A8388055B4B_OFFSET UNITYSDK_OFFSET(0x118F4BC0)
#define CLASS_3_F29FF2F0F1D4B205_METHOD_3_4F6948586D063855_OFFSET UNITYSDK_OFFSET(0x118F6260)
#define CLASS_3_F29FF2F0F1D4B205_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x118F55F0)
#define CLASS_3_F29FF2F0F1D4B205_METHOD_3_DAD497A719A5A6B7_OFFSET UNITYSDK_OFFSET(0x118F5F90)
#define CLASS_3_F29FF2F0F1D4B205_METHOD_3_DC8A7A631720DCED_OFFSET UNITYSDK_OFFSET(0x118F5680)
#define CLASS_3_F29FF2F0F1D4B205_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x118F47D0)
#define CLASS_3_F29FF2F0F1D4B205__CCTOR_OFFSET UNITYSDK_OFFSET(0x118F4AC0)
#define CLASS_3_F29FF2F0F1D4B205__CTOR_OFFSET UNITYSDK_OFFSET(0x118F4B50)

inline static constexpr unsigned int Class_3_F29FF2F0F1D4B205_TypeDefinitionIndex = 38995;

class Class_3_F29FF2F0F1D4B205 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Single* StaticGet_Field_3_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F29FF2F0F1D4B205_TypeDefinitionIndex)->GetStaticField(0xFD30);
	}
	// static const ::System::Int32 Field_3_12 = 0x19; // 0x0
	::System::Action* Field_3_7; // 0x48
	::System::Collections::Generic::List_1<::System::Boolean>* Field_3_8; // 0x50
	::MoleMole::TgsPvLegIkController* Field_3_3; // 0x58
	::Il2CppArray<::System::Boolean>* Field_3_0; // 0x60
	::RootMotion::SolverManager_PostLateUpdateDelegate* Field_3_11; // 0x68
	::Il2CppArray<::RootMotion::FinalIK::LegIK*>* Field_3_5; // 0x70
	::RootMotion::FinalIK::GrounderIK* Field_3_4; // 0x78
	::RootMotion::FinalIK::Grounder_GrounderDelegate* Field_3_10; // 0x80
	::System::Action* Field_3_6; // 0x88
	::System::Int32 Field_3_2; // 0x90
	::System::Single Field_3_1; // 0x94

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F29FF2F0F1D4B205__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F29FF2F0F1D4B205__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F29FF2F0F1D4B205_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F29FF2F0F1D4B205_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_49964A8388055B4B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F29FF2F0F1D4B205_METHOD_3_49964A8388055B4B_OFFSET))(this);
	}

	::System::Boolean Method_3_3D42A0AC2602D380()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F29FF2F0F1D4B205_METHOD_3_3D42A0AC2602D380_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F29FF2F0F1D4B205_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_3_DC8A7A631720DCED()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F29FF2F0F1D4B205_METHOD_3_DC8A7A631720DCED_OFFSET))(this);
	}

	static ::Class_3_F29FF2F0F1D4B205* Method_3_323F95926A2F616E()
	{
		return ((::Class_3_F29FF2F0F1D4B205*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F29FF2F0F1D4B205_METHOD_3_323F95926A2F616E_OFFSET))();
	}

	::System::Boolean Method_3_DAD497A719A5A6B7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F29FF2F0F1D4B205_METHOD_3_DAD497A719A5A6B7_OFFSET))(this);
	}

	::System::Boolean Method_3_4F6948586D063855()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F29FF2F0F1D4B205_METHOD_3_4F6948586D063855_OFFSET))(this);
	}
};

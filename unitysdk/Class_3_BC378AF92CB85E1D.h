#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_BC378AF92CB85E1D_Struct_2_5FF1D5EFE167C656_1.h"

class Class_1_7D3E1A59001AFDA6;
namespace MoleMole::Battle { class Entity; }
namespace RootMotion::FinalIK { class LookAtIK; }
namespace RootMotion::FinalIK { class LookController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_BC378AF92CB85E1D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1C11BD50)
#define CLASS_3_BC378AF92CB85E1D_METHOD_3_792AB6C2A2B589B3_OFFSET UNITYSDK_OFFSET(0x1C11BF60)
#define CLASS_3_BC378AF92CB85E1D_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1C11BED0)
#define CLASS_3_BC378AF92CB85E1D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1C11BAD0)
#define CLASS_3_BC378AF92CB85E1D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C11BDA0)
#define CLASS_3_BC378AF92CB85E1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11BE20)

inline static constexpr unsigned int Class_3_BC378AF92CB85E1D_TypeDefinitionIndex = 53350;

class Class_3_BC378AF92CB85E1D : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_4 = 0x1D; // 0x0
	::UnityEngine::Transform* Field_3_0; // 0x48
	::System::Collections::Generic::List_1<::Class_3_BC378AF92CB85E1D_Struct_2_5FF1D5EFE167C656_1>* Field_3_5; // 0x50
	::Class_1_7D3E1A59001AFDA6* Field_3_1; // 0x58
	::System::Collections::Generic::List_1<::RootMotion::FinalIK::LookController*>* Field_3_7; // 0x60
	::MoleMole::Battle::Entity* Field_3_2; // 0x68
	::RootMotion::FinalIK::LookAtIK* Field_3_6; // 0x70
	::System::Boolean Field_3_3; // 0x78

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_BC378AF92CB85E1D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC378AF92CB85E1D__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC378AF92CB85E1D_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC378AF92CB85E1D_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC378AF92CB85E1D_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_BC378AF92CB85E1D* Method_3_792AB6C2A2B589B3()
	{
		return ((::Class_3_BC378AF92CB85E1D*(*)())((::PBYTE)hIl2Cpp + CLASS_3_BC378AF92CB85E1D_METHOD_3_792AB6C2A2B589B3_OFFSET))();
	}
};

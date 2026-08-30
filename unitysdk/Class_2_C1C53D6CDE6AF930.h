#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtTransformAdaptor_2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_3.h"
#include "unitysdk/Struct_2_59BE5B1187A98C1F.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_65FD3404AD490CB1;
class Class_1_D459106EFEFB0716;
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x17D30CC0)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17D30090)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_2DF0EFFDA2B6622E_OFFSET UNITYSDK_OFFSET(0x17D301A0)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_607EDBB21DB0E699_OFFSET UNITYSDK_OFFSET(0x17D306C0)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x17D30DE0)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x17D30E70)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_7E3C0318CC90CDC0_OFFSET UNITYSDK_OFFSET(0x17D30630)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x17D303F0)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17D30140)
#define CLASS_2_C1C53D6CDE6AF930_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17D300F0)
#define CLASS_2_C1C53D6CDE6AF930_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x17D30FA0)
#define CLASS_2_C1C53D6CDE6AF930_ONREFRESHPOS_OFFSET UNITYSDK_OFFSET(0x17D31050)
#define CLASS_2_C1C53D6CDE6AF930_ONSTART_OFFSET UNITYSDK_OFFSET(0x17D2FEC0)
#define CLASS_2_C1C53D6CDE6AF930_ONSTOP_OFFSET UNITYSDK_OFFSET(0x17D2FF40)
#define CLASS_2_C1C53D6CDE6AF930__CTOR_OFFSET UNITYSDK_OFFSET(0x17D310E0)

inline static constexpr unsigned int Class_2_C1C53D6CDE6AF930_TypeDefinitionIndex = 54403;

class Class_2_C1C53D6CDE6AF930 : public ::RPG::GameCore::RtTransformAdaptor_2<::Struct_2_4C8453486C91E3A1_3, ::Struct_2_59BE5B1187A98C1F>
{
public:
	::UnityEngine::Transform* NJJIJJCGOIP; // 0x50
	::Class_1_65FD3404AD490CB1* PGALAIJOICA; // 0x58
	::UnityEngine::Vector3 ALNOJHDMLCL; // 0x60
	::System::Boolean MFKFCJBNHEK; // 0x6C
	::System::Boolean LKOFFBAHMDC; // 0x6D
	::System::Boolean NDMHEFEGGNM; // 0x6E
	::System::Int32 JDKEKGODFLL; // 0x70
	::RPG::MVector3 AEOMKCMKEEK; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_ONSTART_OFFSET))(this);
	}

	::System::Void OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_ONSTOP_OFFSET))(this);
	}

	::System::Void Method_2_2DF0EFFDA2B6622E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_2DF0EFFDA2B6622E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_607EDBB21DB0E699(::System::Single a1, ::RPG::MVector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_607EDBB21DB0E699_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_7F4EBEC55EBE2D81_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Single Method_2_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void OnRefreshPos(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_ONREFRESHPOS_OFFSET))(this, a1);
	}

	::Class_1_D459106EFEFB0716* Method_2_7E3C0318CC90CDC0()
	{
		return ((::Class_1_D459106EFEFB0716*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1C53D6CDE6AF930_METHOD_2_7E3C0318CC90CDC0_OFFSET))(this);
	}
};

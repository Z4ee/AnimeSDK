#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/RPG/Client/WorldShiftingReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_64D890C466F37235;
class Class_2_2B9847232031B19F;
class Class_2_9D7D5D9CE0D0D8A4_Class_1_26BD93983B72E9A4;
class Class_2_9D7D5D9CE0D0D8A4_Class_1_E58F11CEC1BF0946;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapRotationInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_9D7D5D9CE0D0D8A4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19FAB6E0)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_0CCD3B12D8263B28_OFFSET UNITYSDK_OFFSET(0x19FAE6F0)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_11CEC11E1701C4BC_OFFSET UNITYSDK_OFFSET(0x19FACDA0)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x19FABAB0)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_1F48AB7B56BDD842_OFFSET UNITYSDK_OFFSET(0x19FAF6C0)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_3F22BA13EA84CF3E_OFFSET UNITYSDK_OFFSET(0x19FAC450)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_46EC973EE97CF90C_OFFSET UNITYSDK_OFFSET(0x19FAFD00)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_5A5EA03E1915E90F_OFFSET UNITYSDK_OFFSET(0x19FAFBC0)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_658B76B8CF96D59E_OFFSET UNITYSDK_OFFSET(0x19FADD60)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_718CA2827582AE74_OFFSET UNITYSDK_OFFSET(0x19FABEE0)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x19FABF60)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_77214A3B97B43618_OFFSET UNITYSDK_OFFSET(0x19FAE760)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x19FAD1C0)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_85E6C646060CE264_OFFSET UNITYSDK_OFFSET(0x19FAC580)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_8D2B190E7C342F4A_OFFSET UNITYSDK_OFFSET(0x19FAC3F0)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_92B2D9AC14F1567F_OFFSET UNITYSDK_OFFSET(0x19FAC360)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_9CD607631367DD7F_OFFSET UNITYSDK_OFFSET(0x19FAF890)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0x19FAF8F0)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_D09831639F615812_1_OFFSET UNITYSDK_OFFSET(0x19FAF830)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x19FADCE0)
#define CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_DA4377709D1B2DE3_OFFSET UNITYSDK_OFFSET(0x19FABD30)
#define CLASS_2_9D7D5D9CE0D0D8A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FAFFA0)
#define CLASS_2_9D7D5D9CE0D0D8A4__CTOR_OFFSET UNITYSDK_OFFSET(0x19FAFF20)

inline static constexpr unsigned int Class_2_9D7D5D9CE0D0D8A4_TypeDefinitionIndex = 60719;

class Class_2_9D7D5D9CE0D0D8A4 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_NBFDLMHLPFM()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9D7D5D9CE0D0D8A4_TypeDefinitionIndex)->GetStaticField(0x361A0);
	}
	::UnityEngine::GameObject* OENDDNBGALF; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_9D7D5D9CE0D0D8A4_Class_1_26BD93983B72E9A4*>* OHNPFHNPDEF; // 0x18
	::Class_1_64D890C466F37235* KGCNPIEDOCA; // 0x20
	::RPG::Client::MapRotationInfo* OCDIENNPEDA; // 0x28
	::System::Collections::Generic::List_1<::Class_2_9D7D5D9CE0D0D8A4_Class_1_E58F11CEC1BF0946*>* COKDBHGJHKA; // 0x30
	::Class_2_2B9847232031B19F* BAMECAHHEKC; // 0x38
	::System::Collections::Generic::List_1<::Class_2_9D7D5D9CE0D0D8A4_Class_1_E58F11CEC1BF0946*>* GOMBAOLONDJ; // 0x40
	::RPG::Client::AdventurePhase* DEIEJIOELMO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DA4377709D1B2DE3(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_DA4377709D1B2DE3_OFFSET))(this, a1);
	}

	::System::Void Method_2_718CA2827582AE74(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_718CA2827582AE74_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_92B2D9AC14F1567F(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_92B2D9AC14F1567F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8D2B190E7C342F4A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_8D2B190E7C342F4A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_85E6C646060CE264(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Quaternion a4, ::RPG::Client::WorldShiftingReason a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_85E6C646060CE264_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_11CEC11E1701C4BC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_11CEC11E1701C4BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_2_0CCD3B12D8263B28(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_0CCD3B12D8263B28_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1F48AB7B56BDD842(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_1F48AB7B56BDD842_OFFSET))(this, a1);
	}

	::System::Void Method_2_D09831639F615812_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_D09831639F615812_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9CD607631367DD7F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_9CD607631367DD7F_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_2_3F22BA13EA84CF3E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_3F22BA13EA84CF3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_658B76B8CF96D59E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_658B76B8CF96D59E_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_77214A3B97B43618(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_77214A3B97B43618_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5A5EA03E1915E90F(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_5A5EA03E1915E90F_OFFSET))(this, a1);
	}

	::System::Void Method_2_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_848FDD59AB054F3D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_46EC973EE97CF90C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_METHOD_2_46EC973EE97CF90C_OFFSET))(this);
	}
};

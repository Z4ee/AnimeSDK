#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_838558A14E485175_Struct_2_EAEE9820B8B434E6.h"
#include "unitysdk/Class_1_838558A14E485175_Triangle.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/Struct_2_1C9EA53B06A21796.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_31A09A7631136472;
class Class_1_B91D144796FC50A3;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_838558A14E485175_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE36530)
#define CLASS_1_838558A14E485175_GET_INTERSECTIONINDEX_OFFSET UNITYSDK_OFFSET(0xDE37310)
#define CLASS_1_838558A14E485175_METHOD_1_01C59383FA9A9629_OFFSET UNITYSDK_OFFSET(0xDE394E0)
#define CLASS_1_838558A14E485175_METHOD_1_0920704FAC86C520_OFFSET UNITYSDK_OFFSET(0xDE39350)
#define CLASS_1_838558A14E485175_METHOD_1_154F9E2AC7181838_OFFSET UNITYSDK_OFFSET(0xDE36DB0)
#define CLASS_1_838558A14E485175_METHOD_1_2311537E3DACA60D_OFFSET UNITYSDK_OFFSET(0xDE37950)
#define CLASS_1_838558A14E485175_METHOD_1_2DFDBD60DE9DC94E_OFFSET UNITYSDK_OFFSET(0xDE38920)
#define CLASS_1_838558A14E485175_METHOD_1_35E536BB855343B1_OFFSET UNITYSDK_OFFSET(0xDE36BE0)
#define CLASS_1_838558A14E485175_METHOD_1_35F207C48F89A049_OFFSET UNITYSDK_OFFSET(0xDE37DA0)
#define CLASS_1_838558A14E485175_METHOD_1_5328240CA33530F4_OFFSET UNITYSDK_OFFSET(0xDE37B10)
#define CLASS_1_838558A14E485175_METHOD_1_5E50DFD43A9E43C7_OFFSET UNITYSDK_OFFSET(0xDE36D20)
#define CLASS_1_838558A14E485175_METHOD_1_627581B09C3286ED_OFFSET UNITYSDK_OFFSET(0xDE39620)
#define CLASS_1_838558A14E485175_METHOD_1_711784ABC827465B_OFFSET UNITYSDK_OFFSET(0xDE38B20)
#define CLASS_1_838558A14E485175_METHOD_1_7730783CDF520E91_OFFSET UNITYSDK_OFFSET(0xDE37380)
#define CLASS_1_838558A14E485175_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0xDE36440)
#define CLASS_1_838558A14E485175_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xDE37320)
#define CLASS_1_838558A14E485175_METHOD_1_A490E76375A9E192_OFFSET UNITYSDK_OFFSET(0xDE391C0)
#define CLASS_1_838558A14E485175_METHOD_1_C3C9BF311C318908_OFFSET UNITYSDK_OFFSET(0xDE37370)
#define CLASS_1_838558A14E485175_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xDE372D0)
#define CLASS_1_838558A14E485175_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDE365C0)
#define CLASS_1_838558A14E485175_METHOD_1_D427C756327B1925_OFFSET UNITYSDK_OFFSET(0xDE389F0)
#define CLASS_1_838558A14E485175_METHOD_1_DC196AC52627B25A_OFFSET UNITYSDK_OFFSET(0xDE36600)
#define CLASS_1_838558A14E485175_METHOD_1_F3FCCAFCE9EC88A2_OFFSET UNITYSDK_OFFSET(0xDE38BD0)
#define CLASS_1_838558A14E485175__CTOR_OFFSET UNITYSDK_OFFSET(0xDE34DF0)

inline static constexpr unsigned int Class_1_838558A14E485175_TypeDefinitionIndex = 56659;

class Class_1_838558A14E485175 : public ::System::Object
{
public:
	::RPG::Client::TwoKeyDictionary_3<::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383, ::Class_1_31A09A7631136472*>* Field_1_5; // 0x10
	::Class_1_B91D144796FC50A3* Field_1_2; // 0x18
	::RPG::GameCore::LevelPedestrianV2IntersectionInfo* Field_1_3; // 0x20
	::UnityEngine::GameObject* Field_1_6; // 0x28
	::Il2CppArray<::Class_1_838558A14E485175_Struct_2_EAEE9820B8B434E6>* Field_1_4; // 0x30
	::System::Int32 _IntersectionIndex_k__BackingField; // 0x38
	::Struct_2_1C9EA53B06A21796 Field_1_1; // 0x3C

	::System::Void _ctor(::Class_1_B91D144796FC50A3* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B91D144796FC50A3*, ::RPG::GameCore::LevelPedestrianV2IntersectionInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_DC196AC52627B25A(::Struct_2_085541A9CFF64383 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_DC196AC52627B25A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_35E536BB855343B1(::Struct_2_085541A9CFF64383 a1, ::Struct_2_085541A9CFF64383& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383&))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_35E536BB855343B1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5E50DFD43A9E43C7(::Struct_2_085541A9CFF64383 a1, ::Struct_2_085541A9CFF64383 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_5E50DFD43A9E43C7_OFFSET))(this, a1, a2);
	}

	::Struct_2_085541A9CFF64383 Method_1_154F9E2AC7181838(::Struct_2_085541A9CFF64383 a1)
	{
		return ((::Struct_2_085541A9CFF64383(*)(::PVOID, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_154F9E2AC7181838_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Int32 get_IntersectionIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_GET_INTERSECTIONINDEX_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	::RPG::Client::EPedestrianV2MotionState Method_1_C3C9BF311C318908()
	{
		return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_C3C9BF311C318908_OFFSET))(this);
	}

	static ::System::Boolean Method_1_7730783CDF520E91(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3& a5, ::System::Single a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_7730783CDF520E91_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::UnityEngine::Vector3 Method_1_2311537E3DACA60D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_2311537E3DACA60D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_5328240CA33530F4(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single& a5, ::System::Single& a6, ::System::Double a7)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&, ::System::Single&, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_5328240CA33530F4_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_35F207C48F89A049(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Vector3& a6, ::System::Double a7)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_35F207C48F89A049_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_2DFDBD60DE9DC94E(::Class_1_838558A14E485175_Triangle a1)
	{
		return ((::System::Boolean(*)(::Class_1_838558A14E485175_Triangle))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_2DFDBD60DE9DC94E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D427C756327B1925(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_D427C756327B1925_OFFSET))(a1);
	}

	static ::Class_1_838558A14E485175_Triangle Method_1_711784ABC827465B(::Class_1_838558A14E485175_Triangle a1, ::System::Boolean a2)
	{
		return ((::Class_1_838558A14E485175_Triangle(*)(::Class_1_838558A14E485175_Triangle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_711784ABC827465B_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_838558A14E485175_Triangle>* Method_1_F3FCCAFCE9EC88A2(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_838558A14E485175_Triangle>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_F3FCCAFCE9EC88A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_01C59383FA9A9629(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_01C59383FA9A9629_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A490E76375A9E192(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_A490E76375A9E192_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Rect Method_1_627581B09C3286ED(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::UnityEngine::Rect(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_627581B09C3286ED_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0920704FAC86C520(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2& a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_838558A14E485175_METHOD_1_0920704FAC86C520_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};

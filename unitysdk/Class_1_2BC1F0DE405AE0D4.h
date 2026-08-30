#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2BC1F0DE405AE0D4_Struct_2_EAEE9820B8B434E6.h"
#include "unitysdk/Class_1_2BC1F0DE405AE0D4_Triangle.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/Struct_2_C40BD9CA381B92A3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_31A09A7631136472;
class Class_1_483ED67B5E0A21FB;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionInfo; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2BC1F0DE405AE0D4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1581F0B0)
#define CLASS_1_2BC1F0DE405AE0D4_GET_INTERSECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x158201A0)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_0920704FAC86C520_OFFSET UNITYSDK_OFFSET(0x15822320)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_0FAC631361E3EF71_OFFSET UNITYSDK_OFFSET(0x1581FBE0)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_1CF3F4D491644A32_OFFSET UNITYSDK_OFFSET(0x1581F760)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_2311537E3DACA60D_OFFSET UNITYSDK_OFFSET(0x158207E0)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_33FF5384FC72783E_OFFSET UNITYSDK_OFFSET(0x1581F6B0)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_35F207C48F89A049_OFFSET UNITYSDK_OFFSET(0x15820C30)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_5328240CA33530F4_OFFSET UNITYSDK_OFFSET(0x158209A0)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_5D7CA50C880E4325_OFFSET UNITYSDK_OFFSET(0x15821760)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_69043517DDA43071_OFFSET UNITYSDK_OFFSET(0x15822180)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_711784ABC827465B_OFFSET UNITYSDK_OFFSET(0x15821A30)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_7730783CDF520E91_OFFSET UNITYSDK_OFFSET(0x15820210)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x1581EFC0)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x158201B0)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_A1B57C8C0709E41C_OFFSET UNITYSDK_OFFSET(0x15822600)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_BA45C85D2944586C_OFFSET UNITYSDK_OFFSET(0x1581F1D0)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_BD9708F4EAD991B2_OFFSET UNITYSDK_OFFSET(0x158224B0)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_C3C9BF311C318908_OFFSET UNITYSDK_OFFSET(0x15820200)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15820160)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1581F190)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_DDB10665A2EAC088_OFFSET UNITYSDK_OFFSET(0x1581F5A0)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_E52DD60B6BCBC3B3_OFFSET UNITYSDK_OFFSET(0x158218C0)
#define CLASS_1_2BC1F0DE405AE0D4_METHOD_1_F3FCCAFCE9EC88A2_OFFSET UNITYSDK_OFFSET(0x15821AE0)
#define CLASS_1_2BC1F0DE405AE0D4__CTOR_OFFSET UNITYSDK_OFFSET(0x1581DB10)

inline static constexpr unsigned int Class_1_2BC1F0DE405AE0D4_TypeDefinitionIndex = 69290;

class Class_1_2BC1F0DE405AE0D4 : public ::System::Object
{
public:
	::Class_1_483ED67B5E0A21FB* LGEGKIKIPOB; // 0x10
	::RPG::Client::TwoKeyDictionary_3<::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383, ::Class_1_31A09A7631136472*>* JMMGEMMJBPJ; // 0x18
	::UnityEngine::GameObject* PNCHNENFMPK; // 0x20
	::Il2CppArray<::Class_1_2BC1F0DE405AE0D4_Struct_2_EAEE9820B8B434E6>* HGMEDGBODGE; // 0x28
	::RPG::GameCore::LevelPedestrianV2IntersectionInfo* PDOOAAGJNPF; // 0x30
	::Struct_2_C40BD9CA381B92A3 DICDJJOJKGF; // 0x38
	::System::Int32 _IntersectionIndex_k__BackingField; // 0x78

	::System::Void _ctor(::Class_1_483ED67B5E0A21FB* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_483ED67B5E0A21FB*, ::RPG::GameCore::LevelPedestrianV2IntersectionInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_BA45C85D2944586C(::Struct_2_085541A9CFF64383 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_BA45C85D2944586C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DDB10665A2EAC088(::Struct_2_085541A9CFF64383 a1, ::Struct_2_085541A9CFF64383& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383&))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_DDB10665A2EAC088_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_33FF5384FC72783E(::Struct_2_085541A9CFF64383 a1, ::Struct_2_085541A9CFF64383 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_33FF5384FC72783E_OFFSET))(this, a1, a2);
	}

	::Struct_2_085541A9CFF64383 Method_1_1CF3F4D491644A32(::Struct_2_085541A9CFF64383 a1)
	{
		return ((::Struct_2_085541A9CFF64383(*)(::PVOID, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_1CF3F4D491644A32_OFFSET))(this, a1);
	}

	::System::Void Method_1_0FAC631361E3EF71(::Struct_2_085541A9CFF64383 a1, ::System::Collections::Generic::IList_1<::Struct_2_085541A9CFF64383>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::System::Collections::Generic::IList_1<::Struct_2_085541A9CFF64383>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_0FAC631361E3EF71_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Int32 get_IntersectionIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_GET_INTERSECTIONINDEX_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	::RPG::Client::EPedestrianV2MotionState Method_1_C3C9BF311C318908()
	{
		return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_C3C9BF311C318908_OFFSET))(this);
	}

	static ::System::Boolean Method_1_7730783CDF520E91(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3& a5, ::System::Single a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_7730783CDF520E91_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::UnityEngine::Vector3 Method_1_2311537E3DACA60D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_2311537E3DACA60D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_5328240CA33530F4(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single& a5, ::System::Single& a6, ::System::Double a7)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&, ::System::Single&, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_5328240CA33530F4_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_35F207C48F89A049(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Vector3& a6, ::System::Double a7)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_35F207C48F89A049_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_5D7CA50C880E4325(::Class_1_2BC1F0DE405AE0D4_Triangle a1)
	{
		return ((::System::Boolean(*)(::Class_1_2BC1F0DE405AE0D4_Triangle))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_5D7CA50C880E4325_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E52DD60B6BCBC3B3(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_E52DD60B6BCBC3B3_OFFSET))(a1);
	}

	static ::Class_1_2BC1F0DE405AE0D4_Triangle Method_1_711784ABC827465B(::Class_1_2BC1F0DE405AE0D4_Triangle a1, ::System::Boolean a2)
	{
		return ((::Class_1_2BC1F0DE405AE0D4_Triangle(*)(::Class_1_2BC1F0DE405AE0D4_Triangle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_711784ABC827465B_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_2BC1F0DE405AE0D4_Triangle>* Method_1_F3FCCAFCE9EC88A2(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_2BC1F0DE405AE0D4_Triangle>*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_F3FCCAFCE9EC88A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BD9708F4EAD991B2(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_BD9708F4EAD991B2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_69043517DDA43071(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_69043517DDA43071_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Rect Method_1_A1B57C8C0709E41C(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::UnityEngine::Rect(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_A1B57C8C0709E41C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0920704FAC86C520(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2& a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2BC1F0DE405AE0D4_METHOD_1_0920704FAC86C520_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Transform; }

#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C403040)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER___C__CREATEORREFRESHCHILDNODESFROMANCHORS_B__84_0_OFFSET UNITYSDK_OFFSET(0x1C403360)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C403080)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER___C__REFRESHEDITORCHILDNODELIST_B__77_0_OFFSET UNITYSDK_OFFSET(0x1C403090)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER___C__REFRESHEDITORCHILDNODELIST_B__77_1_OFFSET UNITYSDK_OFFSET(0x1C4031A0)
#define PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER___C__SYNCANCHORSFROMEDITORCHILDNODES_B__78_0_OFFSET UNITYSDK_OFFSET(0x1C403250)

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int PipeSplineMinimalTester___c_TypeDefinitionIndex = 27715;

	class PipeSplineMinimalTester___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::Transform*>** StaticGet___9__84_0()
		{
			return (::System::Predicate_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(PipeSplineMinimalTester___c_TypeDefinitionIndex)->GetStaticField(0x235A0);
		}
		static ::PipeSplineDeformation::PipeSplineMinimalTester___c** StaticGet___9()
		{
			return (::PipeSplineDeformation::PipeSplineMinimalTester___c**)Il2CppClass::FromTypeDefinitionIndex(PipeSplineMinimalTester___c_TypeDefinitionIndex)->GetStaticField(0x235A8);
		}
		static ::System::Predicate_1<::UnityEngine::Transform*>** StaticGet___9__78_0()
		{
			return (::System::Predicate_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(PipeSplineMinimalTester___c_TypeDefinitionIndex)->GetStaticField(0x235B0);
		}
		static ::System::Comparison_1<::UnityEngine::Transform*>** StaticGet___9__77_1()
		{
			return (::System::Comparison_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(PipeSplineMinimalTester___c_TypeDefinitionIndex)->GetStaticField(0x235B8);
		}
		static ::System::Predicate_1<::UnityEngine::Transform*>** StaticGet___9__77_0()
		{
			return (::System::Predicate_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(PipeSplineMinimalTester___c_TypeDefinitionIndex)->GetStaticField(0x235C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshEditorChildNodeList_b__77_0(::UnityEngine::Transform* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER___C__REFRESHEDITORCHILDNODELIST_B__77_0_OFFSET))(this, node);
		}

		::System::Int32 _RefreshEditorChildNodeList_b__77_1(::UnityEngine::Transform* a, ::UnityEngine::Transform* b)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER___C__REFRESHEDITORCHILDNODELIST_B__77_1_OFFSET))(this, a, b);
		}

		::System::Boolean _SyncAnchorsFromEditorChildNodes_b__78_0(::UnityEngine::Transform* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER___C__SYNCANCHORSFROMEDITORCHILDNODES_B__78_0_OFFSET))(this, node);
		}

		::System::Boolean _CreateOrRefreshChildNodesFromAnchors_b__84_0(::UnityEngine::Transform* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEMINIMALTESTER___C__CREATEORREFRESHCHILDNODESFROMANCHORS_B__84_0_OFFSET))(this, node);
		}
	};
}

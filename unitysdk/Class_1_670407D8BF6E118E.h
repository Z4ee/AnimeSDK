#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BB024667087A129E.h"
#include "unitysdk/Enum_3_BB702611CCC85D7E.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"

class Class_1_0A48C0117A1B22E8;
class Class_1_D80D6A1CD3EC8E42;
class Class_2_C2B4B123B5A9B78A;
namespace Foundation { class IAssetPool; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering { class VolumeProfile; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define CLASS_1_670407D8BF6E118E_METHOD_1_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x140FCD40)
#define CLASS_1_670407D8BF6E118E_METHOD_1_0D7D526C820FF5A3_OFFSET UNITYSDK_OFFSET(0x140FD3A0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_19A7FC6D7836BFD6_OFFSET UNITYSDK_OFFSET(0x140FB5F0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x140FF530)
#define CLASS_1_670407D8BF6E118E_METHOD_1_27B919F64E0C6178_OFFSET UNITYSDK_OFFSET(0x140FE260)
#define CLASS_1_670407D8BF6E118E_METHOD_1_301B9899FABEB494_OFFSET UNITYSDK_OFFSET(0x140FB1D0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_31EA9050E0F34036_OFFSET UNITYSDK_OFFSET(0x140FF820)
#define CLASS_1_670407D8BF6E118E_METHOD_1_39536A721566455B_OFFSET UNITYSDK_OFFSET(0x140FA9F0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_3A5675546C5AD0BA_OFFSET UNITYSDK_OFFSET(0x140FF3B0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x140FDE90)
#define CLASS_1_670407D8BF6E118E_METHOD_1_4F13B215F669967A_OFFSET UNITYSDK_OFFSET(0x140FE980)
#define CLASS_1_670407D8BF6E118E_METHOD_1_5F8866D01B728102_OFFSET UNITYSDK_OFFSET(0x140FF780)
#define CLASS_1_670407D8BF6E118E_METHOD_1_603746B082925454_OFFSET UNITYSDK_OFFSET(0x140FEC10)
#define CLASS_1_670407D8BF6E118E_METHOD_1_61F66B4B04709379_OFFSET UNITYSDK_OFFSET(0x140FB8D0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0x140FC950)
#define CLASS_1_670407D8BF6E118E_METHOD_1_68A8AB71BC0F1FF3_OFFSET UNITYSDK_OFFSET(0x140FD1E0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_6D3265EF35806513_OFFSET UNITYSDK_OFFSET(0x140FC9E0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_7018C17B29AE4141_OFFSET UNITYSDK_OFFSET(0x140FC060)
#define CLASS_1_670407D8BF6E118E_METHOD_1_74FE0F242303E029_OFFSET UNITYSDK_OFFSET(0x140FD0E0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_7676D30F6F948991_OFFSET UNITYSDK_OFFSET(0x140FBED0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_7FD4528952FCA268_OFFSET UNITYSDK_OFFSET(0x140FF320)
#define CLASS_1_670407D8BF6E118E_METHOD_1_80DB1A8895BB9F8A_OFFSET UNITYSDK_OFFSET(0x140FBA40)
#define CLASS_1_670407D8BF6E118E_METHOD_1_8D2AB96411F361DC_OFFSET UNITYSDK_OFFSET(0x140FEAC0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x140FD920)
#define CLASS_1_670407D8BF6E118E_METHOD_1_96980C17A8BB1F06_OFFSET UNITYSDK_OFFSET(0x140FD610)
#define CLASS_1_670407D8BF6E118E_METHOD_1_9C66B07446448FC6_OFFSET UNITYSDK_OFFSET(0x140FE5A0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_B839AD5CB4E018CF_OFFSET UNITYSDK_OFFSET(0x140FE6E0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_B9B2BB81857711F5_OFFSET UNITYSDK_OFFSET(0x140FC2B0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x140FB190)
#define CLASS_1_670407D8BF6E118E_METHOD_1_BE0895945913B87C_OFFSET UNITYSDK_OFFSET(0x140FAD90)
#define CLASS_1_670407D8BF6E118E_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x140FF4E0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_C8065D4F59F4EF02_OFFSET UNITYSDK_OFFSET(0x140FC1E0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x140FA9A0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_CB041ED9F0197C0B_OFFSET UNITYSDK_OFFSET(0x140FC7E0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x140FCF60)
#define CLASS_1_670407D8BF6E118E_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x140FD990)
#define CLASS_1_670407D8BF6E118E_METHOD_1_F4AC2F73B2036484_OFFSET UNITYSDK_OFFSET(0x140FDBE0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_FADC4CF5E863A06F_OFFSET UNITYSDK_OFFSET(0x140FDF30)
#define CLASS_1_670407D8BF6E118E__CTOR_OFFSET UNITYSDK_OFFSET(0x140FA7A0)

inline static constexpr unsigned int Class_1_670407D8BF6E118E_TypeDefinitionIndex = 55229;

class Class_1_670407D8BF6E118E : public ::System::Object
{
public:
	static ::Class_1_670407D8BF6E118E** StaticGet_Field_1_3()
	{
		return (::Class_1_670407D8BF6E118E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_670407D8BF6E118E_TypeDefinitionIndex)->GetStaticField(0x44740);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_670407D8BF6E118E_TypeDefinitionIndex)->GetStaticField(0x109F0);
	}
	// static const ::System::String* Field_1_13; // 0x0
	::UnityEngine::Rendering::Volume* Field_1_9; // 0x10
	::UnityEngine::Rendering::Volume* Field_1_10; // 0x18
	::UnityEngine::GameObject* Field_1_12; // 0x20
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_16; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetRequestHandle>* Field_1_11; // 0x30
	::UnityEngine::Camera* Field_1_2; // 0x38
	::System::Collections::Generic::HashSet_1<::Foundation::AssetPath>* Field_1_18; // 0x40
	::UnityEngine::Light* Field_1_6; // 0x48
	::UnityEngine::GameObject* Field_1_5; // 0x50
	::System::Collections::Generic::List_1<::Foundation::AssetPath>* Field_1_17; // 0x58
	::UnityEngine::GameObject* Field_1_1; // 0x60
	::UnityEngine::Light* Field_1_7; // 0x68
	::System::Collections::Generic::List_1<::Class_1_D80D6A1CD3EC8E42*>* Field_1_0; // 0x70
	::System::Collections::Generic::List_1<::Class_1_0A48C0117A1B22E8*>* Field_1_15; // 0x78
	::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* Field_1_8; // 0x80
	::UnityEngine::GameObject* Field_1_14; // 0x88
	::Foundation::IAssetPool* Field_1_19; // 0x90
	::System::Int32 Field_1_20; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E__CTOR_OFFSET))(this);
	}

	::UnityEngine::Camera* Method_1_39536A721566455B(::Spine::Unity::SkeletonGraphic* a1)
	{
		return ((::UnityEngine::Camera*(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_39536A721566455B_OFFSET))(this, a1);
	}

	::UnityEngine::Rendering::VolumeProfile* Method_1_BE0895945913B87C(::System::String* a1)
	{
		return ((::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_BE0895945913B87C_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_BC46FCF99873D9DD_OFFSET))(this);
	}

	::System::Void Method_1_301B9899FABEB494(::Foundation::AssetPath a1, ::System::Boolean a2, ::UnityEngine::Transform* a3, ::System::Action_2<::UnityEngine::GameObject*, ::Foundation::AssetPath>* a4, ::System::Action_1<::Foundation::AssetPath>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean, ::UnityEngine::Transform*, ::System::Action_2<::UnityEngine::GameObject*, ::Foundation::AssetPath>*, ::System::Action_1<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_301B9899FABEB494_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_80DB1A8895BB9F8A(::UnityEngine::GameObject* a1, ::System::String* a2, ::Enum_3_BB702611CCC85D7E a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_80DB1A8895BB9F8A_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_C2B4B123B5A9B78A* Method_1_7018C17B29AE4141(::System::String* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::GameObject* a4, ::UnityEngine::GameObject* a5, ::System::String* a6, ::System::Boolean a7, ::Enum_3_BB702611CCC85D7E a8)
	{
		return ((::Class_2_C2B4B123B5A9B78A*(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*, ::System::Boolean, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_7018C17B29AE4141_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_B9B2BB81857711F5(::Class_1_0A48C0117A1B22E8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A48C0117A1B22E8*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_B9B2BB81857711F5_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_1_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_1_74FE0F242303E029(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_74FE0F242303E029_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D3265EF35806513(::System::Boolean a1, ::Enum_3_BB702611CCC85D7E a2, ::MoleMole::UIAvatarLightSetting* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_BB702611CCC85D7E, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_6D3265EF35806513_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::Rendering::Volume* Method_1_68A8AB71BC0F1FF3(::Enum_3_BB702611CCC85D7E a1)
	{
		return ((::UnityEngine::Rendering::Volume*(*)(::PVOID, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_68A8AB71BC0F1FF3_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D7D526C820FF5A3(::System::String* a1, ::Enum_3_BB702611CCC85D7E a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_0D7D526C820FF5A3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_96980C17A8BB1F06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_96980C17A8BB1F06_OFFSET))(this);
	}

	static ::Class_1_670407D8BF6E118E* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_670407D8BF6E118E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_47FCE72550F759BF_OFFSET))();
	}

	::System::Void Method_1_FADC4CF5E863A06F(::UnityEngine::GameObject* a1, ::Enum_3_BB702611CCC85D7E a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_FADC4CF5E863A06F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_27B919F64E0C6178(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2, ::Enum_3_BB024667087A129E a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::Enum_3_BB024667087A129E, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_27B919F64E0C6178_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_9C66B07446448FC6(::Class_1_D80D6A1CD3EC8E42* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D80D6A1CD3EC8E42*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_9C66B07446448FC6_OFFSET))(this, a1);
	}

	::System::Void Method_1_B839AD5CB4E018CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_B839AD5CB4E018CF_OFFSET))(this);
	}

	::Class_2_C2B4B123B5A9B78A* Method_1_4F13B215F669967A(::System::Single a1, ::System::Single a2, ::System::String* a3, ::System::String* a4, ::Enum_3_BB702611CCC85D7E a5, ::UnityEngine::Experimental::Rendering::GraphicsFormat a6)
	{
		return ((::Class_2_C2B4B123B5A9B78A*(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::Enum_3_BB702611CCC85D7E, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_4F13B215F669967A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_2_C2B4B123B5A9B78A* Method_1_8D2AB96411F361DC(::System::Single a1, ::System::Single a2, ::System::String* a3, ::System::String* a4, ::Enum_3_BB702611CCC85D7E a5, ::System::Boolean a6)
	{
		return ((::Class_2_C2B4B123B5A9B78A*(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::Enum_3_BB702611CCC85D7E, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_8D2AB96411F361DC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_CB041ED9F0197C0B(::System::UInt32 a1, ::Class_1_0A48C0117A1B22E8*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_0A48C0117A1B22E8*&))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_CB041ED9F0197C0B_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_1_603746B082925454(::System::String* a1, ::Enum_3_BB702611CCC85D7E a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_603746B082925454_OFFSET))(this, a1, a2);
	}

	::Foundation::IAssetPool* Method_1_61F66B4B04709379()
	{
		return ((::Foundation::IAssetPool*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_61F66B4B04709379_OFFSET))(this);
	}

	::System::Void Method_1_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_1_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_640514F2FC7A7607_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4AC2F73B2036484()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_F4AC2F73B2036484_OFFSET))(this);
	}

	::System::Void Method_1_7FD4528952FCA268(::System::Int32 a1, ::System::Boolean a2, ::System::Action_1<::UnityEngine::GameObject*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_7FD4528952FCA268_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_1_7676D30F6F948991(::System::Boolean a1, ::Enum_3_BB702611CCC85D7E a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_7676D30F6F948991_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_1_19A7FC6D7836BFD6(::Foundation::AssetPath a1, ::UnityEngine::Transform* a2, ::System::Action_2<::UnityEngine::GameObject*, ::Foundation::AssetPath>* a3, ::System::Action_1<::Foundation::AssetPath>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::Transform*, ::System::Action_2<::UnityEngine::GameObject*, ::Foundation::AssetPath>*, ::System::Action_1<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_19A7FC6D7836BFD6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_C8065D4F59F4EF02()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_C8065D4F59F4EF02_OFFSET))(this);
	}

	::System::Void Method_1_3A5675546C5AD0BA(::Foundation::AssetPath a1, ::System::Boolean a2, ::System::Action_1<::UnityEngine::GameObject*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean, ::System::Action_1<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_3A5675546C5AD0BA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_5F8866D01B728102(::System::String* a1, ::Enum_3_BB702611CCC85D7E a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_5F8866D01B728102_OFFSET))(this, a1, a2);
	}

	::Class_1_D80D6A1CD3EC8E42* Method_1_31EA9050E0F34036(::System::Single a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::Class_1_D80D6A1CD3EC8E42*(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_31EA9050E0F34036_OFFSET))(this, a1, a2, a3);
	}
};

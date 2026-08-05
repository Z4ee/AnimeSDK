#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C0F166E610126827.h"
#include "unitysdk/MoleMole/Config/RuntimePolygonBound.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }

#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_04AF73A09EA893EA_OFFSET UNITYSDK_OFFSET(0x13AC8180)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_168CB7D727816462_OFFSET UNITYSDK_OFFSET(0x13AC8ED0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_4D180EE6CCAF9213_OFFSET UNITYSDK_OFFSET(0x13ACB840)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_51BFB3E94FB1CB71_OFFSET UNITYSDK_OFFSET(0x13AC9830)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_53742E90BB500E06_OFFSET UNITYSDK_OFFSET(0x13AC76C0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_55F181A4B49BC3F3_OFFSET UNITYSDK_OFFSET(0x13ACB4D0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_57E4BA37E771C492_OFFSET UNITYSDK_OFFSET(0x13ACA730)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_5FADA780F71C971E_OFFSET UNITYSDK_OFFSET(0x13AC83B0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_6C4917BFE459750B_OFFSET UNITYSDK_OFFSET(0x13ACB040)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_6E3E9A6DC759FB76_OFFSET UNITYSDK_OFFSET(0x13ACA220)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_6F41D10A334C4DA0_OFFSET UNITYSDK_OFFSET(0x13ACB5F0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_8068DF89AAA80F54_OFFSET UNITYSDK_OFFSET(0x13AC7F60)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_880DFF29BF355A17_OFFSET UNITYSDK_OFFSET(0x13AC95D0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_89E89349E1D44E81_OFFSET UNITYSDK_OFFSET(0x13ACAF90)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_8ADCE9C57A07A406_OFFSET UNITYSDK_OFFSET(0x13ACB590)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x13AC7380)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_9C600FE2756E336D_OFFSET UNITYSDK_OFFSET(0x13AC7E90)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_A29FB25C27BCF355_OFFSET UNITYSDK_OFFSET(0x13AC8840)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_A93A77624721F809_OFFSET UNITYSDK_OFFSET(0x13ACA4D0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_B953F5B762A2C3B6_OFFSET UNITYSDK_OFFSET(0x13AC88D0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_BBC77FCCD600FB29_OFFSET UNITYSDK_OFFSET(0x13AC84B0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_BC3D63492246CA32_OFFSET UNITYSDK_OFFSET(0x13AC97C0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_C4C0E1999F96C1F5_OFFSET UNITYSDK_OFFSET(0x13AC9A60)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_D1772482A593E38D_OFFSET UNITYSDK_OFFSET(0x13ACA7A0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_D729EA2F7EBAA848_OFFSET UNITYSDK_OFFSET(0x13ACA3C0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_FD086027167FCB75_OFFSET UNITYSDK_OFFSET(0x13AC8640)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13AC7DE0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_ONSUBMITPOLYGON_OFFSET UNITYSDK_OFFSET(0x13AC6F50)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13AC7E30)

namespace MoleMole
{
	inline static constexpr unsigned int NapLevel_MiasmaSprayerMeshGenerator_TypeDefinitionIndex = 62478;

	class NapLevel_MiasmaSprayerMeshGenerator : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_3; // 0x0
		// static const ::System::Int32 Field_5_2 = 0x20; // 0x0
		::UnityEngine::MeshRenderer* m_TargetMeshRenderer; // 0x18
		::UnityEngine::MeshFilter* m_TargetMeshFilter; // 0x20
		::Enum_3_C0F166E610126827 _uvMode; // 0x28
		::System::Single _planarTilingSize; // 0x2C
		::System::Boolean _enableEdgeTransition; // 0x30
		::System::Single _edgeTransitionDistance; // 0x34
		::UnityEngine::Mesh* Field_5_11; // 0x38
		::UnityEngine::Material* Field_5_10; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void OnSubmitPolygon(::System::String* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_ONSUBMITPOLYGON_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_9C600FE2756E336D(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_9C600FE2756E336D_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Mesh* Method_5_53742E90BB500E06(::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_53742E90BB500E06_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_FD086027167FCB75(::MoleMole::Config::RuntimePolygonBound a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a5, ::System::Collections::Generic::List_1<::UnityEngine::Color>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RuntimePolygonBound, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_FD086027167FCB75_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean Method_5_880DFF29BF355A17(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2& a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_880DFF29BF355A17_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean Method_5_51BFB3E94FB1CB71(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_51BFB3E94FB1CB71_OFFSET))(a1);
		}

		static ::System::Boolean Method_5_A29FB25C27BCF355(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Single a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_A29FB25C27BCF355_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Method_5_04AF73A09EA893EA(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_04AF73A09EA893EA_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Method_5_D729EA2F7EBAA848(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_D729EA2F7EBAA848_OFFSET))(a1);
		}

		static ::System::Boolean Method_5_A93A77624721F809(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_A93A77624721F809_OFFSET))(a1);
		}

		static ::System::Void Method_5_BBC77FCCD600FB29(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_BBC77FCCD600FB29_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_5_6E3E9A6DC759FB76(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Single a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_6E3E9A6DC759FB76_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Method_5_89E89349E1D44E81(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_89E89349E1D44E81_OFFSET))(a1);
		}

		static ::System::Single Method_5_BC3D63492246CA32(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_BC3D63492246CA32_OFFSET))(a1, a2);
		}

		::System::Void Method_5_B953F5B762A2C3B6(::MoleMole::Config::RuntimePolygonBound a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3, ::System::Collections::Generic::List_1<::System::Int32>* a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a5, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a6, ::System::Collections::Generic::List_1<::UnityEngine::Color>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RuntimePolygonBound, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_B953F5B762A2C3B6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Method_5_168CB7D727816462(::MoleMole::Config::RuntimePolygonBound a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a5, ::System::Collections::Generic::List_1<::UnityEngine::Color>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RuntimePolygonBound, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_168CB7D727816462_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_5_99053D1AE5A59190()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_99053D1AE5A59190_OFFSET))(this);
		}

		static ::System::Void Method_5_55F181A4B49BC3F3(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_55F181A4B49BC3F3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean Method_5_57E4BA37E771C492(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_57E4BA37E771C492_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_5_8ADCE9C57A07A406(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_8ADCE9C57A07A406_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean Method_5_6F41D10A334C4DA0(::UnityEngine::Vector2 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_6F41D10A334C4DA0_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Method_5_4D180EE6CCAF9213(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_4D180EE6CCAF9213_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Method_5_D1772482A593E38D(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_D1772482A593E38D_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Method_5_C4C0E1999F96C1F5(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Single a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_C4C0E1999F96C1F5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Method_5_8068DF89AAA80F54(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_8068DF89AAA80F54_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_5_5FADA780F71C971E(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_5FADA780F71C971E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_6C4917BFE459750B(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a6, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a7, ::System::Collections::Generic::List_1<::UnityEngine::Color>* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_METHOD_5_6C4917BFE459750B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}

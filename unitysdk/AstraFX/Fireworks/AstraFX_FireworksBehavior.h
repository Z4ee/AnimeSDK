#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AstraFX/Fireworks/AstraFX_FireworksBehavior_Struct_2_F7C243F317D8E44A_1.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/Struct_2_BBFE20496CC14816_1.h"
#include "unitysdk/Struct_2_FD37BB0C9F20D20F.h"
#include "unitysdk/Struct_2_FD37BB0C9F20D20F_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace AstraFX::Fireworks { class AstraFX_FireworksBehavior_Class_1_753AF195FC954AC8; }
namespace AstraFX::Fireworks { class AstraFX_FireworksMonoPlugin; }
namespace AstraFX::Fireworks { class FireworkType; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class AstraFXRenderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class TrailRenderer; }
namespace UnityEngine { class Transform; }

#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_ADD_ONFIREWORKEXPLODED_OFFSET UNITYSDK_OFFSET(0x1596C130)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_ADD_ONFIREWORKLAUNCHED_OFFSET UNITYSDK_OFFSET(0x1596C030)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x1596C510)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x1596C590)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_322660C1A07434B2_OFFSET UNITYSDK_OFFSET(0x1596DF10)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_332E8DA02BCCBD12_OFFSET UNITYSDK_OFFSET(0x1596D290)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x1596C840)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x1596E640)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_41782CE468D1B24D_OFFSET UNITYSDK_OFFSET(0x1596CB20)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_532625EE9744AF89_OFFSET UNITYSDK_OFFSET(0x1596F8A0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_583407A37EA614AA_OFFSET UNITYSDK_OFFSET(0x1596CCC0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_5A6434846524FCDB_OFFSET UNITYSDK_OFFSET(0x1596FBC0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_5F95156648583964_OFFSET UNITYSDK_OFFSET(0x1596ED80)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x1596DEE0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x1596C6E0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1596ED70)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x1596D8A0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x1596ED60)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x15970550)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1596DED0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_8327FEEFBF3EC917_OFFSET UNITYSDK_OFFSET(0x1596D8B0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_9A34582197D203A0_OFFSET UNITYSDK_OFFSET(0x15970560)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x15970570)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_AD4F6DA9E13A593D_OFFSET UNITYSDK_OFFSET(0x1596DB60)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x1596C230)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_C8EED11299FD17DB_OFFSET UNITYSDK_OFFSET(0x1596D9F0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1596DE60)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x1596E830)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_EDBC885B6838D667_OFFSET UNITYSDK_OFFSET(0x1596FCB0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_EE7339DA6ECF5F6D_OFFSET UNITYSDK_OFFSET(0x1596FDD0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_F3A245A5CA051281_OFFSET UNITYSDK_OFFSET(0x1596F0D0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_FA8946DB130B1C7A_OFFSET UNITYSDK_OFFSET(0x1596FBD0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_REMOVE_ONFIREWORKEXPLODED_OFFSET UNITYSDK_OFFSET(0x1596C1B0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_REMOVE_ONFIREWORKLAUNCHED_OFFSET UNITYSDK_OFFSET(0x1596C0B0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x1596CA70)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x15970B30)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x159708E0)

namespace AstraFX::Fireworks
{
	inline static constexpr unsigned int AstraFX_FireworksBehavior_TypeDefinitionIndex = 49447;

	class AstraFX_FireworksBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet_s_TypeHueShiftRangesID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AstraFX_FireworksBehavior_TypeDefinitionIndex)->GetStaticField(0xB7C0);
		}
		static ::System::Int32* StaticGet_s_TypeIntensitiesID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AstraFX_FireworksBehavior_TypeDefinitionIndex)->GetStaticField(0xB7C4);
		}
		static ::System::Int32* StaticGet_s_TypeRibbonHDRIntensitiesID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AstraFX_FireworksBehavior_TypeDefinitionIndex)->GetStaticField(0xB7C8);
		}
		static ::System::Int32* StaticGet_s_TypeCountID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AstraFX_FireworksBehavior_TypeDefinitionIndex)->GetStaticField(0xB7CC);
		}
		static ::System::Int32* StaticGet_s_TypeDebrisHDRIntensitiesID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AstraFX_FireworksBehavior_TypeDefinitionIndex)->GetStaticField(0xB7D0);
		}
		static ::System::Int32* StaticGet_s_GradientTextureID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AstraFX_FireworksBehavior_TypeDefinitionIndex)->GetStaticField(0xB7D4);
		}
		static ::System::Int32* StaticGet_s_TypeRibbonUVSpeedsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AstraFX_FireworksBehavior_TypeDefinitionIndex)->GetStaticField(0xB7D8);
		}
		static ::System::Int32* StaticGet_s_TypeRibbonWidthsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AstraFX_FireworksBehavior_TypeDefinitionIndex)->GetStaticField(0xB7DC);
		}
		static ::System::Int32* StaticGet_s_TypeRibbonUVScalesID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AstraFX_FireworksBehavior_TypeDefinitionIndex)->GetStaticField(0xB7E0);
		}
		static ::System::Int32* StaticGet_s_TypeRibbonTapersID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AstraFX_FireworksBehavior_TypeDefinitionIndex)->GetStaticField(0xB7E4);
		}
		static ::System::Int32* StaticGet_s_TypeRibbonChannelsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AstraFX_FireworksBehavior_TypeDefinitionIndex)->GetStaticField(0xB7E8);
		}
		static ::System::Int32* StaticGet_s_TypeRibbonLengthScalesID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AstraFX_FireworksBehavior_TypeDefinitionIndex)->GetStaticField(0xB7EC);
		}
		// static const ::System::Int32 MAX_DEBRIS = 0x1000; // 0x0
		// static const ::System::Int32 THREAD_GROUP_SIZE = 0x40; // 0x0
		// static const ::System::Int32 GRADIENT_RESOLUTION = 0x40; // 0x0
		// static const ::System::Int32 ROWS_PER_TYPE = 0x4; // 0x0
		::System::Action_1<::Struct_2_FD37BB0C9F20D20F>* OnFireworkLaunched; // 0x38
		::System::Action_1<::Struct_2_FD37BB0C9F20D20F_1>* OnFireworkExploded; // 0x40
		::UnityEngine::AstraFXRenderer* m_Renderer; // 0x48
		::System::Collections::Generic::List_1<::AstraFX::Fireworks::AstraFX_FireworksBehavior_Class_1_753AF195FC954AC8*>* m_ActiveRockets; // 0x50
		::System::Collections::Generic::Queue_1<::Struct_2_BBFE20496CC14816_1>* m_PendingExplosions; // 0x58
		::System::Collections::Generic::List_1<::AstraFX::Fireworks::AstraFX_FireworksBehavior_Struct_2_F7C243F317D8E44A_1>* m_ActiveExplosions; // 0x60
		::System::Int32 m_EstimatedAliveCount; // 0x68
		::System::Int32 m_SpawnPassIndex; // 0x6C
		::System::Int32 m_UpdatePassIndex; // 0x70
		::UnityEngine::Texture2D* m_GradientTexture; // 0x78
		::System::Boolean m_GradientDirty; // 0x80
		::Il2CppArray<::System::Single>* m_IntensityArray; // 0x88
		::Il2CppArray<::System::Single>* m_RibbonChannelArray; // 0x90
		::Il2CppArray<::System::Single>* m_HueShiftRangeArray; // 0x98
		::Il2CppArray<::System::Single>* m_RibbonWidthArray; // 0xA0
		::Il2CppArray<::System::Single>* m_RibbonTaperArray; // 0xA8
		::Il2CppArray<::UnityEngine::Vector4>* m_RibbonUVSpeedArray; // 0xB0
		::Il2CppArray<::UnityEngine::Vector4>* m_RibbonUVScaleArray; // 0xB8
		::Il2CppArray<::System::Single>* m_DebrisHdrIntensityArray; // 0xC0
		::Il2CppArray<::System::Single>* m_RibbonHdrIntensityArray; // 0xC8
		::Il2CppArray<::System::Single>* m_RibbonLengthScaleArray; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::TrailRenderer*>* m_TrailPool; // 0xD8
		::System::Collections::Generic::Queue_1<::System::Int32>* m_FreeTrailIndices; // 0xE0
		::UnityEngine::Transform* m_TrailRoot; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void add_OnFireworkLaunched(::System::Action_1<::Struct_2_FD37BB0C9F20D20F>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Struct_2_FD37BB0C9F20D20F>*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_ADD_ONFIREWORKLAUNCHED_OFFSET))(this, a1);
		}

		::System::Void remove_OnFireworkLaunched(::System::Action_1<::Struct_2_FD37BB0C9F20D20F>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Struct_2_FD37BB0C9F20D20F>*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_REMOVE_ONFIREWORKLAUNCHED_OFFSET))(this, a1);
		}

		::System::Void add_OnFireworkExploded(::System::Action_1<::Struct_2_FD37BB0C9F20D20F_1>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Struct_2_FD37BB0C9F20D20F_1>*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_ADD_ONFIREWORKEXPLODED_OFFSET))(this, a1);
		}

		::System::Void remove_OnFireworkExploded(::System::Action_1<::Struct_2_FD37BB0C9F20D20F_1>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Struct_2_FD37BB0C9F20D20F_1>*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_REMOVE_ONFIREWORKEXPLODED_OFFSET))(this, a1);
		}

		::System::Void Method_3_C7BF9C1E6A78DCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_C7BF9C1E6A78DCAB_OFFSET))(this);
		}

		::System::Void Method_3_367B9590522079D1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_367B9590522079D1_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_8327FEEFBF3EC917()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_8327FEEFBF3EC917_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_3_6D93101E4CE10A96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_6D93101E4CE10A96_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET))(this);
		}

		::System::Void Method_3_5F95156648583964(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::AstraFX::Fireworks::FireworkType* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::AstraFX::Fireworks::FireworkType*, ::System::Int32))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_5F95156648583964_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_583407A37EA614AA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_583407A37EA614AA_OFFSET))(this, a1);
		}

		::System::Void Method_3_332E8DA02BCCBD12(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_332E8DA02BCCBD12_OFFSET))(this, a1);
		}

		::System::Void Method_3_832295EC279E5994_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_832295EC279E5994_2_OFFSET))(this);
		}

		::System::Void Method_3_41782CE468D1B24D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_41782CE468D1B24D_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_5A6434846524FCDB(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_5A6434846524FCDB_OFFSET))(this, a1);
		}

		::System::Void Method_3_FA8946DB130B1C7A(::Struct_2_BBFE20496CC14816_1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_BBFE20496CC14816_1))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_FA8946DB130B1C7A_OFFSET))(this, a1);
		}

		::System::Void Method_3_79830F666EE579C0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_79830F666EE579C0_OFFSET))(this);
		}

		::System::Void Method_3_3CCA0B8A31B650A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_3CCA0B8A31B650A8_OFFSET))(this);
		}

		::System::Void Method_3_E69AA2E64A20143D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_E69AA2E64A20143D_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_832295EC279E5994_3_OFFSET))(this);
		}

		::System::Void Method_3_322660C1A07434B2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_322660C1A07434B2_OFFSET))(this);
		}

		::System::Void Method_3_C8EED11299FD17DB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_C8EED11299FD17DB_OFFSET))(this);
		}

		::System::Void Method_3_EE7339DA6ECF5F6D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_EE7339DA6ECF5F6D_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_832295EC279E5994_4_OFFSET))(this);
		}

		::UnityEngine::Texture2D* Method_3_9A34582197D203A0()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_9A34582197D203A0_OFFSET))(this);
		}

		::System::Void Method_3_21886A8411E71157()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_21886A8411E71157_OFFSET))(this);
		}

		::System::Int32 Method_3_F3A245A5CA051281(::UnityEngine::Color a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_F3A245A5CA051281_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_EDBC885B6838D667(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_EDBC885B6838D667_OFFSET))(this, a1);
		}

		::System::Void Method_3_AD4F6DA9E13A593D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_AD4F6DA9E13A593D_OFFSET))(this);
		}

		::System::Void Method_3_ABE7715DB28B2DD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_ABE7715DB28B2DD1_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 Method_3_532625EE9744AF89(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_METHOD_3_532625EE9744AF89_OFFSET))(a1, a2);
		}

		::AstraFX::Fireworks::AstraFX_FireworksMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::AstraFX::Fireworks::AstraFX_FireworksMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}

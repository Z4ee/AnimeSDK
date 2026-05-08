#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/MoleMole/MonoTerrainZoneVoxel_Enum_3_BE429607AD3CE9BA.h"
#include "unitysdk/MoleMole/MonoTerrainZoneVoxel_WeatherDefaultMat.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Numerics/Vector3.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_1_1DC99F3008D2ACD0;
namespace MoleMole { class MonoDynamicObjectVoxel; }
namespace MoleMole { class MonoTerrainZoneVoxel_VoxelData; }
namespace MoleMole::Voxel { class VoxelArray; }
namespace MoleMole::Voxel { class VoxelCompressArray; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_MONOTERRAINZONEVOXEL_ADDDYNAMICOBJECTVOXEL_OFFSET UNITYSDK_OFFSET(0x10BD7E70)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_FETCHVOXELWITHLAYER_COMPRESSEDARRAY_OFFSET UNITYSDK_OFFSET(0x10BD7A70)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_FETCHVOXELWITHLAYER_OCT_OFFSET UNITYSDK_OFFSET(0x10BD71C0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_FETCHVOXELWITHLAYER_OFFSET UNITYSDK_OFFSET(0x10BD70C0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_FETCHVOXELWITHLAYER_RAWARRAY_OFFSET UNITYSDK_OFFSET(0x10BD7780)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_GETSURFACECOVERSWITCHINFO_OFFSET UNITYSDK_OFFSET(0x10BD5C30)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_GETSURFACESWITCHINFO_OFFSET UNITYSDK_OFFSET(0x10BD5AC0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_GETUNSCALEPOS_OFFSET UNITYSDK_OFFSET(0x10BD6DA0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_GETVOXEL_OFFSET UNITYSDK_OFFSET(0x10BD6E90)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_02416282B55EC5F3_OFFSET UNITYSDK_OFFSET(0x10BD6880)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x10BD9590)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_0927CBCFB2A51C9A_OFFSET UNITYSDK_OFFSET(0x10BD87D0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x10BD93C0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x10BD8EC0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_19FB9C4218A5B74F_OFFSET UNITYSDK_OFFSET(0x10BD91C0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x10BD6250)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_464F9487BF0D77F8_OFFSET UNITYSDK_OFFSET(0x10BD8880)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x10BD86D0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x10BD6030)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_6424DA16BE1ACD1D_OFFSET UNITYSDK_OFFSET(0x10BD8830)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_6C34F0EA80C7348F_OFFSET UNITYSDK_OFFSET(0x10BD7FD0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x10BD6580)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x10BD8F30)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_7F576417C636CD3F_1_OFFSET UNITYSDK_OFFSET(0x10BD9510)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_7F576417C636CD3F_OFFSET UNITYSDK_OFFSET(0x10BD7040)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_904639FDEF8DA904_OFFSET UNITYSDK_OFFSET(0x10BD89D0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10BD92B0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_BFB8545B28B0DAAD_OFFSET UNITYSDK_OFFSET(0x10BD8C30)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_C0B9D1B2E5611154_OFFSET UNITYSDK_OFFSET(0x10BD8C90)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10BD9380)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10BD8E70)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_DDA7FEACCC547653_OFFSET UNITYSDK_OFFSET(0x10BD85C0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_E05A16F4C3178177_1_OFFSET UNITYSDK_OFFSET(0x10BD8770)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_E05A16F4C3178177_OFFSET UNITYSDK_OFFSET(0x10BD8670)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_F3F1A00B2E67355E_OFFSET UNITYSDK_OFFSET(0x10BD7E20)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_F8E58E0FD73B9311_OFFSET UNITYSDK_OFFSET(0x10BD9160)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_FEA241CA014F8043_OFFSET UNITYSDK_OFFSET(0x10BD95E0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10BD5FE0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10BD5FA0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_PACKMATTYPE_OFFSET UNITYSDK_OFFSET(0x10BD5D70)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_PACKSPANDATATOTOP_OFFSET UNITYSDK_OFFSET(0x10BD5F50)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_REMOVEDYNAMICOBJECTVOXEL_OFFSET UNITYSDK_OFFSET(0x10BD7F20)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_RESETVOXEL_OFFSET UNITYSDK_OFFSET(0x10BD6E40)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_START_OFFSET UNITYSDK_OFFSET(0x10BD6530)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_UNPACKMATTYPE_OFFSET UNITYSDK_OFFSET(0x10BD5EB0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x10BD6830)
#define MOLEMOLE_MONOTERRAINZONEVOXEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x10BD8550)
#define MOLEMOLE_MONOTERRAINZONEVOXEL__CTOR_OFFSET UNITYSDK_OFFSET(0x10BD81D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainZoneVoxel_TypeDefinitionIndex = 40072;

	class MonoTerrainZoneVoxel : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action_1<::UnityEngine::Vector3>** StaticGet_Field_5_14()
		{
			return (::System::Action_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(MonoTerrainZoneVoxel_TypeDefinitionIndex)->GetStaticField(0x2E8C0);
		}
		static ::System::Int32* StaticGet_Field_5_29()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoTerrainZoneVoxel_TypeDefinitionIndex)->GetStaticField(0xAA00);
		}
		static ::System::Int32* StaticGet_Field_5_28()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoTerrainZoneVoxel_TypeDefinitionIndex)->GetStaticField(0xAA04);
		}
		static ::System::Byte* StaticGet_BASE_MAT_MAX_RANGE()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonoTerrainZoneVoxel_TypeDefinitionIndex)->GetStaticField(0xAA08);
		}
		static ::System::Byte* StaticGet_COVER_MAT_MAX_RANGE()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonoTerrainZoneVoxel_TypeDefinitionIndex)->GetStaticField(0xAA09);
		}
		// static const ::System::String* Field_5_27; // 0x0
		::MoleMole::MonoTerrainZoneVoxel_Enum_3_BE429607AD3CE9BA Field_5_2; // 0x18
		::MoleMole::Config::WeatherType bakedWeatherType; // 0x1C
		::Il2CppArray<::MoleMole::MonoTerrainZoneVoxel_VoxelData*>* weatherVoxelData; // 0x20
		::MoleMole::Voxel::VoxelArray* weatherVoxelArray; // 0x28
		::MoleMole::Voxel::VoxelCompressArray* weatherVoxelCompressedArray; // 0x30
		::UnityEngine::Vector3Int voxelMeta; // 0x38
		::UnityEngine::Vector3 voxelMin; // 0x44
		::UnityEngine::Vector3 voxelMax; // 0x50
		::UnityEngine::Vector2 voxelPrecision; // 0x5C
		::System::Single QueryRadis; // 0x64
		::UnityEngine::Vector3 CharacterPos; // 0x68
		::UnityEngine::Vector3 VoxelCharacterPos; // 0x74
		::MoleMole::Config::WeatherType _currentTerrainWeatherType; // 0x80
		::System::Collections::Generic::List_1<::System::Byte>* Field_5_16; // 0x88
		::MoleMole::Voxel::VoxelArray* Field_5_17; // 0x90
		::System::Boolean Field_5_18; // 0x98
		::Foundation::AssetRequestHandle Field_5_19; // 0xA0
		::MoleMole::Voxel::VoxelCompressArray* Field_5_20; // 0xC0
		::Class_1_1DC99F3008D2ACD0* Field_5_21; // 0xC8
		::Il2CppArray<::UnityEngine::Color>* Field_5_22; // 0xD0
		::UnityEngine::Material* Field_5_23; // 0xD8
		::System::Boolean Field_5_24; // 0xE0
		::UnityEngine::Bounds Field_5_25; // 0xE4
		::UnityEngine::ComputeBuffer* Field_5_26; // 0x100
		::Foundation::AssetRequestHandle Field_5_30; // 0x108
		::Il2CppArray<::MoleMole::MonoTerrainZoneVoxel_WeatherDefaultMat>* defaultTerrainMatTypes; // 0x128
		::System::Boolean isWorking; // 0x130
		::System::Boolean Field_5_33; // 0x131
		::System::Int32 Field_5_34; // 0x134
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::WeatherType, ::System::Byte>* Field_5_35; // 0x138
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_5_36; // 0x140
		::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> Field_5_37; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL__CCTOR_OFFSET))();
		}

		static ::System::Void GetSurfaceSwitchInfo(::MoleMole::Config::TerrainMatType a1, ::System::String*& a2, ::System::String*& a3)
		{
			return ((::System::Void(*)(::MoleMole::Config::TerrainMatType, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_GETSURFACESWITCHINFO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GetSurfaceCoverSwitchInfo(::MoleMole::Config::TerrainMatType a1, ::System::String*& a2, ::System::String*& a3)
		{
			return ((::System::Void(*)(::MoleMole::Config::TerrainMatType, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_GETSURFACECOVERSWITCHINFO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PackMatType(::System::Int32 a1, ::System::Int32 a2, ::System::Byte& a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Byte&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_PACKMATTYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnpackMatType(::System::Byte a1, ::System::Byte& a2, ::System::Byte& a3)
		{
			return ((::System::Void(*)(::System::Byte, ::System::Byte&, ::System::Byte&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_UNPACKMATTYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 PackSpanDataToTop(::System::Int16 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int16, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_PACKSPANDATATOTOP_OFFSET))(a1, a2);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ONDESTROY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetUnScalePos(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_GETUNSCALEPOS_OFFSET))(this, a1);
		}

		::System::Void ResetVoxel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_RESETVOXEL_OFFSET))(this);
		}

		::System::Boolean GetVoxel(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::System::Byte>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::System::Byte>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_GETVOXEL_OFFSET))(this, a1, a2);
		}

		::System::Boolean FetchVoxelWithLayer(::UnityEngine::Vector3 a1, ::System::Byte& a2, ::System::Byte& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Byte&, ::System::Byte&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_FETCHVOXELWITHLAYER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FetchVoxelWithLayer_RawArray(::UnityEngine::Vector3 a1, ::System::Byte& a2, ::System::Byte& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Byte&, ::System::Byte&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_FETCHVOXELWITHLAYER_RAWARRAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddDynamicObjectVoxel(::MoleMole::MonoDynamicObjectVoxel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDynamicObjectVoxel*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_ADDDYNAMICOBJECTVOXEL_OFFSET))(this, a1);
		}

		::System::Void RemoveDynamicObjectVoxel(::MoleMole::MonoDynamicObjectVoxel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDynamicObjectVoxel*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_REMOVEDYNAMICOBJECTVOXEL_OFFSET))(this, a1);
		}

		::System::Boolean FetchVoxelWithLayer_CompressedArray(::UnityEngine::Vector3 a1, ::System::Byte& a2, ::System::Byte& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Byte&, ::System::Byte&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_FETCHVOXELWITHLAYER_COMPRESSEDARRAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FetchVoxelWithLayer_Oct(::UnityEngine::Vector3 a1, ::System::Byte& a2, ::System::Byte& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Byte&, ::System::Byte&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_FETCHVOXELWITHLAYER_OCT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_DDA7FEACCC547653(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_DDA7FEACCC547653_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_02416282B55EC5F3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_02416282B55EC5F3_OFFSET))(this);
		}

		::System::Void Method_5_6424DA16BE1ACD1D(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_6424DA16BE1ACD1D_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_5_6C34F0EA80C7348F(::System::Byte& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_6C34F0EA80C7348F_OFFSET))(this, a1);
		}

		static ::System::Numerics::Vector3 Method_5_7F576417C636CD3F(::UnityEngine::Vector3 a1)
		{
			return ((::System::Numerics::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_7F576417C636CD3F_OFFSET))(a1);
		}

		::System::Void Method_5_464F9487BF0D77F8(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_464F9487BF0D77F8_OFFSET))(this, a1);
		}

		::System::Void Method_5_BFB8545B28B0DAAD(::System::Byte a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_BFB8545B28B0DAAD_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_C0B9D1B2E5611154(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_C0B9D1B2E5611154_OFFSET))(this, a1);
		}

		static ::System::Void Method_5_F3F1A00B2E67355E(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_F3F1A00B2E67355E_OFFSET))(a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_19CCC07C980409E4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_19CCC07C980409E4_OFFSET))(this, a1);
		}

		::System::Void Method_5_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_5_F8E58E0FD73B9311(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_F8E58E0FD73B9311_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::UnityEngine::Mesh* Method_5_0927CBCFB2A51C9A()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_0927CBCFB2A51C9A_OFFSET))(this);
		}

		::System::Void Method_5_7DB49B5407C8FD68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_7DB49B5407C8FD68_OFFSET))(this);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* Method_5_E05A16F4C3178177()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_E05A16F4C3178177_OFFSET))(this);
		}

		::System::Boolean Method_5_4DA6D4A624E42CAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_4DA6D4A624E42CAB_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 Method_5_7F576417C636CD3F_1(::System::Numerics::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::Numerics::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_7F576417C636CD3F_1_OFFSET))(a1);
		}

		::System::Void Method_5_7744894CEC41BF06()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_7744894CEC41BF06_OFFSET))(this);
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_5_904639FDEF8DA904(::MoleMole::MonoTerrainZoneVoxel_VoxelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTerrainZoneVoxel_VoxelData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_904639FDEF8DA904_OFFSET))(this, a1);
		}

		::UnityEngine::ComputeBuffer* Method_5_E05A16F4C3178177_1()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_E05A16F4C3178177_1_OFFSET))(this);
		}

		::System::Void Method_5_050E70FEDB783306(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_050E70FEDB783306_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_5_FEA241CA014F8043(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_FEA241CA014F8043_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_19FB9C4218A5B74F(::UnityEngine::ComputeShader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_METHOD_5_19FB9C4218A5B74F_OFFSET))(this, a1);
		}
	};
}

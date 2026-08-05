#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_2AD981AB6ACE5E06_2;
class Class_2_793F88ABAFAF0774;
class Class_2_AE77556F8299A979;
class Class_3_C5136A7A7911A5D4;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_00266B9DD90A749A_OFFSET UNITYSDK_OFFSET(0x149EF080)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_1904F4E96364B9B6_OFFSET UNITYSDK_OFFSET(0x149EE340)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_1C5A49F5CE4EBFAC_OFFSET UNITYSDK_OFFSET(0x149EF810)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_222951B8BA7FC1B0_OFFSET UNITYSDK_OFFSET(0x149EF2C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_3B119FE486105FA9_OFFSET UNITYSDK_OFFSET(0x149EED20)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_41F5D9C0F0A306F5_OFFSET UNITYSDK_OFFSET(0x149EF3F0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_44C6956149352354_OFFSET UNITYSDK_OFFSET(0x149EF780)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_6D018EEBA2C5321E_OFFSET UNITYSDK_OFFSET(0x149EF1B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_7F2A7CA025DA2DFB_1_OFFSET UNITYSDK_OFFSET(0x149EEBF0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_7F2A7CA025DA2DFB_OFFSET UNITYSDK_OFFSET(0x149EE210)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_B7AAFBF75390B7E2_OFFSET UNITYSDK_OFFSET(0x149EEF70)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x149EDD80)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x149EE000)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowChessboardEntityConfigManager_TypeDefinitionIndex = 68264;

	class HollowChessboardEntityConfigManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_793F88ABAFAF0774*>** StaticGet_Field_1_6()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_793F88ABAFAF0774*>**)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardEntityConfigManager_TypeDefinitionIndex)->GetStaticField(0x32730);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_C5136A7A7911A5D4*>** StaticGet_Field_1_7()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_C5136A7A7911A5D4*>**)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardEntityConfigManager_TypeDefinitionIndex)->GetStaticField(0x32738);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_AE77556F8299A979*>** StaticGet_Field_1_5()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_AE77556F8299A979*>**)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardEntityConfigManager_TypeDefinitionIndex)->GetStaticField(0x32740);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2AD981AB6ACE5E06_2*>** StaticGet_Field_1_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2AD981AB6ACE5E06_2*>**)Il2CppClass::FromTypeDefinitionIndex(HollowChessboardEntityConfigManager_TypeDefinitionIndex)->GetStaticField(0x32748);
		}
		// static const ::System::String* Field_1_2; // 0x0
		// static const ::System::String* Field_1_1; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void Reset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_RESET_OFFSET))();
		}

		static ::Class_2_793F88ABAFAF0774* Method_1_7F2A7CA025DA2DFB(::System::Int32 a1)
		{
			return ((::Class_2_793F88ABAFAF0774*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_7F2A7CA025DA2DFB_OFFSET))(a1);
		}

		static ::System::Boolean Method_1_1904F4E96364B9B6(::Foundation::AssetPath a1, ::Foundation::AssetRequestHandle& a2)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_1904F4E96364B9B6_OFFSET))(a1, a2);
		}

		static ::Class_2_AE77556F8299A979* Method_1_7F2A7CA025DA2DFB_1(::System::Int32 a1)
		{
			return ((::Class_2_AE77556F8299A979*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_7F2A7CA025DA2DFB_1_OFFSET))(a1);
		}

		static ::System::Void Method_1_3B119FE486105FA9(::System::Boolean a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_3B119FE486105FA9_OFFSET))(a1, a2);
		}

		static ::Class_3_C5136A7A7911A5D4* Method_1_00266B9DD90A749A(::System::Int32 a1)
		{
			return ((::Class_3_C5136A7A7911A5D4*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_00266B9DD90A749A_OFFSET))(a1);
		}

		static ::System::Void Method_1_6D018EEBA2C5321E(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_6D018EEBA2C5321E_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::Foundation::AssetPath>* Method_1_B7AAFBF75390B7E2()
		{
			return ((::Il2CppArray<::Foundation::AssetPath>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_B7AAFBF75390B7E2_OFFSET))();
		}

		static ::Class_1_2AD981AB6ACE5E06_2* Method_1_222951B8BA7FC1B0(::System::Int32 a1)
		{
			return ((::Class_1_2AD981AB6ACE5E06_2*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_222951B8BA7FC1B0_OFFSET))(a1);
		}

		static ::System::Void Method_1_41F5D9C0F0A306F5()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_41F5D9C0F0A306F5_OFFSET))();
		}

		static ::System::Collections::IEnumerator* Method_1_44C6956149352354(::System::Single a1, ::System::Action_1<::System::Single>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_44C6956149352354_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::Class_2_AE77556F8299A979*>* Method_1_1C5A49F5CE4EBFAC()
		{
			return ((::System::Collections::Generic::List_1<::Class_2_AE77556F8299A979*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWCHESSBOARDENTITYCONFIGMANAGER_METHOD_1_1C5A49F5CE4EBFAC_OFFSET))();
		}
	};
}

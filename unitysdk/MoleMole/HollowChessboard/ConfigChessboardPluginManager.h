#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_27CCD45BA8768483;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x14181010)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_METHOD_1_1C4CBEEE68711A80_OFFSET UNITYSDK_OFFSET(0x14181120)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_METHOD_1_3D7C8028EBFBA9A4_OFFSET UNITYSDK_OFFSET(0x14181410)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_METHOD_1_41F5D9C0F0A306F5_OFFSET UNITYSDK_OFFSET(0x14180B70)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_METHOD_1_44C6956149352354_OFFSET UNITYSDK_OFFSET(0x14181380)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_METHOD_1_B7AAFBF75390B7E2_OFFSET UNITYSDK_OFFSET(0x14180F00)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_METHOD_1_DD788187B6D83B98_OFFSET UNITYSDK_OFFSET(0x141806A0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x141804F0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14180600)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigChessboardPluginManager_TypeDefinitionIndex = 63570;

	class ConfigChessboardPluginManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_27CCD45BA8768483*>** StaticGet_Field_1_2()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_27CCD45BA8768483*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigChessboardPluginManager_TypeDefinitionIndex)->GetStaticField(0x376A0);
		}
		// static const ::System::String* Field_1_0; // 0x0
		// static const ::System::String* Field_1_1; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void Reset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_RESET_OFFSET))();
		}

		static ::System::Boolean Method_1_DD788187B6D83B98(::Foundation::AssetPath a1, ::Foundation::AssetRequestHandle& a2)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_METHOD_1_DD788187B6D83B98_OFFSET))(a1, a2);
		}

		static ::System::Void Method_1_41F5D9C0F0A306F5()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_METHOD_1_41F5D9C0F0A306F5_OFFSET))();
		}

		static ::Il2CppArray<::Foundation::AssetPath>* Method_1_B7AAFBF75390B7E2()
		{
			return ((::Il2CppArray<::Foundation::AssetPath>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_METHOD_1_B7AAFBF75390B7E2_OFFSET))();
		}

		static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::IEnumerator* Method_1_44C6956149352354(::System::Single a1, ::System::Action_1<::System::Single>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_METHOD_1_44C6956149352354_OFFSET))(a1, a2);
		}

		static ::Class_1_27CCD45BA8768483* Method_1_3D7C8028EBFBA9A4(::System::String* a1)
		{
			return ((::Class_1_27CCD45BA8768483*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_METHOD_1_3D7C8028EBFBA9A4_OFFSET))(a1);
		}

		static ::System::Void Method_1_1C4CBEEE68711A80(::System::Boolean a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_METHOD_1_1C4CBEEE68711A80_OFFSET))(a1, a2);
		}
	};
}

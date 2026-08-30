#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IMessage; }
namespace Proto { class PerformanceStartSnapshot; }
namespace System { class String; }
namespace System::IO { class Stream; }

#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_AESDECRYPT_OFFSET UNITYSDK_OFFSET(0x18653C90)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_AESENCRYPT_OFFSET UNITYSDK_OFFSET(0x186544E0)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_GETPERFORMANCESNAPSHOTFILENAME_OFFSET UNITYSDK_OFFSET(0x18653B00)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_LOADPERFORMANCESTARTSNAPSHOTWITHBACKUP_OFFSET UNITYSDK_OFFSET(0x18653800)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_LOADPERFORMANCESTARTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x186538B0)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_WRITETOSTREAM_OFFSET UNITYSDK_OFFSET(0x18654010)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18654860)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceReplayUtils_TypeDefinitionIndex = 62294;

	class PerformanceReplayUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__DefaultAESKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x59580);
		}
		static ::System::String** StaticGet_JsonExtension()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x59588);
		}
		static ::System::String** StaticGet_PerformanceLogPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x59590);
		}
		static ::System::String** StaticGet_PerformanceSnapshotOutputPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x59598);
		}
		static ::System::String** StaticGet_ByteExtension()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x595A0);
		}
		static ::System::String** StaticGet__DefaultAESIV()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x595A8);
		}
		static ::System::String** StaticGet_PacketLogFilePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x595B0);
		}
		static ::System::String** StaticGet_PerformanceSnapshotLoadPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x595B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS__CCTOR_OFFSET))();
		}

		static ::Proto::PerformanceStartSnapshot* LoadPerformanceStartSnapshotWithBackup(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2, ::System::UInt32 a3, ::RPG::GameCore::ELevelPerformanceType a4)
		{
			return ((::Proto::PerformanceStartSnapshot*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_LOADPERFORMANCESTARTSNAPSHOTWITHBACKUP_OFFSET))(a1, a2, a3, a4);
		}

		static ::Proto::PerformanceStartSnapshot* LoadPerformanceStartSnapshot(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
		{
			return ((::Proto::PerformanceStartSnapshot*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_LOADPERFORMANCESTARTSNAPSHOT_OFFSET))(a1, a2);
		}

		static ::System::Boolean WriteToStream(::Google::Protobuf::IMessage* a1, ::System::IO::Stream* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::System::Boolean(*)(::Google::Protobuf::IMessage*, ::System::IO::Stream*, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_WRITETOSTREAM_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::Il2CppArray<::System::Byte>* AesEncrypt(::Il2CppArray<::System::Byte>* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_AESENCRYPT_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* AesDecrypt(::Il2CppArray<::System::Byte>* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_AESDECRYPT_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetPerformanceSnapshotFileName(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_GETPERFORMANCESNAPSHOTFILENAME_OFFSET))(a1, a2, a3);
		}
	};
}

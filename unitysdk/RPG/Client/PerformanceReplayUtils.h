#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IMessage; }
namespace Proto { class PerformanceStartSnapshot; }
namespace System { class String; }
namespace System::IO { class Stream; }

#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_AESDECRYPT_OFFSET UNITYSDK_OFFSET(0x9F2D420)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_AESENCRYPT_OFFSET UNITYSDK_OFFSET(0x9F2DC50)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_GETPERFORMANCESNAPSHOTFILENAME_OFFSET UNITYSDK_OFFSET(0x9F2D2D0)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_LOADPERFORMANCESTARTSNAPSHOTWITHBACKUP_OFFSET UNITYSDK_OFFSET(0x9F2D0A0)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_LOADPERFORMANCESTARTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9F2D150)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_WRITETOSTREAM_OFFSET UNITYSDK_OFFSET(0x9F2D760)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F2DF90)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceReplayUtils_TypeDefinitionIndex = 50518;

	class PerformanceReplayUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__DefaultAESKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x458C0);
		}
		static ::System::String** StaticGet_PerformanceSnapshotOutputPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x458C8);
		}
		static ::System::String** StaticGet_PerformanceLogPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x458D0);
		}
		static ::System::String** StaticGet__DefaultAESIV()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x458D8);
		}
		static ::System::String** StaticGet_PerformanceSnapshotLoadPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x458E0);
		}
		static ::System::String** StaticGet_JsonExtension()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x458E8);
		}
		static ::System::String** StaticGet_ByteExtension()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x458F0);
		}
		static ::System::String** StaticGet_PacketLogFilePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x458F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS__CCTOR_OFFSET))();
		}

		static ::Proto::PerformanceStartSnapshot* LoadPerformanceStartSnapshotWithBackup(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType, ::System::UInt32 backupPerformanceID, ::RPG::GameCore::ELevelPerformanceType backupPerformanceType)
		{
			return ((::Proto::PerformanceStartSnapshot*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_LOADPERFORMANCESTARTSNAPSHOTWITHBACKUP_OFFSET))(performanceID, performanceType, backupPerformanceID, backupPerformanceType);
		}

		static ::Proto::PerformanceStartSnapshot* LoadPerformanceStartSnapshot(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType)
		{
			return ((::Proto::PerformanceStartSnapshot*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_LOADPERFORMANCESTARTSNAPSHOT_OFFSET))(performanceID, performanceType);
		}

		static ::System::Boolean WriteToStream(::Google::Protobuf::IMessage* message, ::System::IO::Stream* resultStream, ::System::Boolean compress, ::System::Boolean encrypt, ::System::String* aesKey, ::System::String* aesIv)
		{
			return ((::System::Boolean(*)(::Google::Protobuf::IMessage*, ::System::IO::Stream*, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_WRITETOSTREAM_OFFSET))(message, resultStream, compress, encrypt, aesKey, aesIv);
		}

		static ::Il2CppArray<::System::Byte>* AesEncrypt(::Il2CppArray<::System::Byte>* toEncryptArray, ::System::String* aesKey, ::System::String* aesIv)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_AESENCRYPT_OFFSET))(toEncryptArray, aesKey, aesIv);
		}

		static ::Il2CppArray<::System::Byte>* AesDecrypt(::Il2CppArray<::System::Byte>* toEncryptArray, ::System::String* aesKey, ::System::String* aesIv)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_AESDECRYPT_OFFSET))(toEncryptArray, aesKey, aesIv);
		}

		static ::System::String* GetPerformanceSnapshotFileName(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType, ::System::Boolean isJson)
		{
			return ((::System::String*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_GETPERFORMANCESNAPSHOTFILENAME_OFFSET))(performanceID, performanceType, isJson);
		}
	};
}

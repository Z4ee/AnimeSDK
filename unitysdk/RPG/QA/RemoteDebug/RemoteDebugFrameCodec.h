#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/QA/RemoteDebug/RemoteDebugDiscoveryReply.h"
#include "unitysdk/RPG/QA/RemoteDebug/RemoteDebugDiscoveryType.h"
#include "unitysdk/RPG/QA/RemoteDebug/RemoteDebugFrame.h"
#include "unitysdk/RPG/QA/RemoteDebug/RemoteDebugFrameType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_ENCODEQUERY_OFFSET UNITYSDK_OFFSET(0x1B5039C0)
#define RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_ENCODEREPLY_OFFSET UNITYSDK_OFFSET(0x1B503A90)
#define RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_ENCODE_OFFSET UNITYSDK_OFFSET(0x1B5036C0)
#define RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_READINT32LE_OFFSET UNITYSDK_OFFSET(0x1B503910)
#define RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_READLENPREFIXEDSTRING_OFFSET UNITYSDK_OFFSET(0x1B504930)
#define RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_READUINT16LE_OFFSET UNITYSDK_OFFSET(0x1B503980)
#define RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_TRYDECODEHEADER_OFFSET UNITYSDK_OFFSET(0x1B5042D0)
#define RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_TRYDECODEREPLY_OFFSET UNITYSDK_OFFSET(0x1B504360)
#define RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_TRYDECODE_OFFSET UNITYSDK_OFFSET(0x1B503810)
#define RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_WRITEINT32LE_OFFSET UNITYSDK_OFFSET(0x1B503770)
#define RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_WRITELENPREFIXEDSTRING_OFFSET UNITYSDK_OFFSET(0x1B5040B0)
#define RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_WRITEUINT16LE_OFFSET UNITYSDK_OFFSET(0x1B5037D0)
#define RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_WRITEUINT32LE_OFFSET UNITYSDK_OFFSET(0x1B503A30)

namespace RPG::QA::RemoteDebug
{
	inline static constexpr unsigned int RemoteDebugFrameCodec_TypeDefinitionIndex = 52129;

	class RemoteDebugFrameCodec : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* Encode(::RPG::QA::RemoteDebug::RemoteDebugFrameType a1, ::System::UInt16 a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::RPG::QA::RemoteDebug::RemoteDebugFrameType, ::System::UInt16, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_ENCODE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 TryDecode(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::QA::RemoteDebug::RemoteDebugFrame& a4)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::RPG::QA::RemoteDebug::RemoteDebugFrame&))((::PBYTE)hIl2Cpp + RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_TRYDECODE_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::Byte>* EncodeQuery()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_ENCODEQUERY_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* EncodeReply(::RPG::QA::RemoteDebug::RemoteDebugDiscoveryReply a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::RPG::QA::RemoteDebug::RemoteDebugDiscoveryReply))((::PBYTE)hIl2Cpp + RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_ENCODEREPLY_OFFSET))(a1);
		}

		static ::System::Boolean TryDecodeHeader(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::RPG::QA::RemoteDebug::RemoteDebugDiscoveryType& a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::RPG::QA::RemoteDebug::RemoteDebugDiscoveryType&))((::PBYTE)hIl2Cpp + RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_TRYDECODEHEADER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryDecodeReply(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::RPG::QA::RemoteDebug::RemoteDebugDiscoveryReply& a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::RPG::QA::RemoteDebug::RemoteDebugDiscoveryReply&))((::PBYTE)hIl2Cpp + RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_TRYDECODEREPLY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void WriteInt32LE(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_WRITEINT32LE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void WriteUInt32LE(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_WRITEUINT32LE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void WriteUInt16LE(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::UInt16 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_WRITEUINT16LE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 ReadInt32LE(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_READINT32LE_OFFSET))(a1, a2);
		}

		static ::System::UInt16 ReadUInt16LE(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::UInt16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_READUINT16LE_OFFSET))(a1, a2);
		}

		static ::System::Void WriteLenPrefixedString(::System::IO::BinaryWriter* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_WRITELENPREFIXEDSTRING_OFFSET))(a1, a2);
		}

		static ::System::String* ReadLenPrefixedString(::System::IO::BinaryReader* a1)
		{
			return ((::System::String*(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + RPG_QA_REMOTEDEBUG_REMOTEDEBUGFRAMECODEC_READLENPREFIXEDSTRING_OFFSET))(a1);
		}
	};
}

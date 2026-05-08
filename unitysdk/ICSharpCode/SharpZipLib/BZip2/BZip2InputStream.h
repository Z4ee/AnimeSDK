#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace ICSharpCode::SharpZipLib::Checksums { class IChecksum; }

#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_BADBLOCKHEADER_OFFSET UNITYSDK_OFFSET(0x1B5D0C40)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_BLOCKOVERRUN_OFFSET UNITYSDK_OFFSET(0x1B5D3AB0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_BSGETINT32_OFFSET UNITYSDK_OFFSET(0x1B5D0C90)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_BSGETINTVS_OFFSET UNITYSDK_OFFSET(0x1B5D2160)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_BSGETUCHAR_OFFSET UNITYSDK_OFFSET(0x1B5D0AC0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_BSR_OFFSET UNITYSDK_OFFSET(0x1B5D0DB0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_BSSETSTREAM_OFFSET UNITYSDK_OFFSET(0x1B5CF8E0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B5D0480)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1B5D0BC0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_COMPRESSEDSTREAMEOF_OFFSET UNITYSDK_OFFSET(0x1B5D2110)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_CRCERROR_OFFSET UNITYSDK_OFFSET(0x1B5D1FF0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_ENDBLOCK_OFFSET UNITYSDK_OFFSET(0x1B5D1EB0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_FILLBUFFER_OFFSET UNITYSDK_OFFSET(0x1B5D2040)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1B5D0150)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_GETANDMOVETOFRONTDECODE_OFFSET UNITYSDK_OFFSET(0x1B5D0E10)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1B5D0030)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1B5D0060)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1B5D0090)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_GET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1B5D0010)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1B5D00A0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B5D00D0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_HBCREATEDECODETABLES_OFFSET UNITYSDK_OFFSET(0x1B5D32B0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_INITBLOCK_OFFSET UNITYSDK_OFFSET(0x1B5CFA30)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B5CF900)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_MAKEMAPS_OFFSET UNITYSDK_OFFSET(0x1B5D09E0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x1B5D0410)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1B5D02B0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_RECVDECODINGTABLES_OFFSET UNITYSDK_OFFSET(0x1B5D21C0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1B5D0170)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETDECOMPRESSSTRUCTURESIZES_OFFSET UNITYSDK_OFFSET(0x1B5D0B10)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1B5D01C0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETUPBLOCK_OFFSET UNITYSDK_OFFSET(0x1B5CFDC0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETUPNORANDPARTA_OFFSET UNITYSDK_OFFSET(0x1B5D3D50)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETUPNORANDPARTB_OFFSET UNITYSDK_OFFSET(0x1B5D07C0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETUPNORANDPARTC_OFFSET UNITYSDK_OFFSET(0x1B5D08A0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETUPRANDPARTA_OFFSET UNITYSDK_OFFSET(0x1B5D3B00)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETUPRANDPARTB_OFFSET UNITYSDK_OFFSET(0x1B5D04B0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETUPRANDPARTC_OFFSET UNITYSDK_OFFSET(0x1B5D0680)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1B5D0020)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B5D0100)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1B5D0260)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1B5D0210)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CF540)

namespace ICSharpCode::SharpZipLib::BZip2
{
	inline static constexpr unsigned int BZip2InputStream_TypeDefinitionIndex = 6637;

	class BZip2InputStream : public ::System::IO::Stream
	{
	public:
		// static const ::System::Int32 START_BLOCK_STATE = 0x1; // 0x0
		// static const ::System::Int32 RAND_PART_A_STATE = 0x2; // 0x0
		// static const ::System::Int32 RAND_PART_B_STATE = 0x3; // 0x0
		// static const ::System::Int32 RAND_PART_C_STATE = 0x4; // 0x0
		// static const ::System::Int32 NO_RAND_PART_A_STATE = 0x5; // 0x0
		// static const ::System::Int32 NO_RAND_PART_B_STATE = 0x6; // 0x0
		// static const ::System::Int32 NO_RAND_PART_C_STATE = 0x7; // 0x0
		::Il2CppArray<::System::Int32>* unzftab; // 0x28
		::Il2CppArray<::System::Int32>* minLens; // 0x30
		::Il2CppArray<::System::Boolean>* inUse; // 0x38
		::Il2CppArray<::System::Int32>* tt; // 0x40
		::Il2CppArray<::System::Byte>* unseqToSeq; // 0x48
		::Il2CppArray<::System::Byte>* selectorMtf; // 0x50
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* limit; // 0x58
		::Il2CppArray<::System::Byte>* ll8; // 0x60
		::ICSharpCode::SharpZipLib::Checksums::IChecksum* mCrc; // 0x68
		::Il2CppArray<::System::Byte>* selector; // 0x70
		::System::IO::Stream* baseStream; // 0x78
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* baseArray; // 0x80
		::Il2CppArray<::System::Byte>* seqToUnseq; // 0x88
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* perm; // 0x90
		::System::Boolean isStreamOwner; // 0x98
		::System::Boolean blockRandomised; // 0x99
		::System::Boolean streamEnd; // 0x9A
		::System::Byte z; // 0x9B
		::System::Int32 rNToGo; // 0x9C
		::System::Int32 i2; // 0xA0
		::System::Int32 currentState; // 0xA4
		::System::UInt32 computedCombinedCRC; // 0xA8
		::System::Int32 tPos; // 0xAC
		::System::Int32 origPtr; // 0xB0
		::System::Int32 currentChar; // 0xB4
		::System::Int32 storedBlockCRC; // 0xB8
		::System::Int32 j2; // 0xBC
		::System::Int32 computedBlockCRC; // 0xC0
		::System::Int32 bsLive; // 0xC4
		::System::Int32 storedCombinedCRC; // 0xC8
		::System::Int32 count; // 0xCC
		::System::Int32 blockSize100k; // 0xD0
		::System::Int32 rTPos; // 0xD4
		::System::Int32 bsBuff; // 0xD8
		::System::Int32 ch2; // 0xDC
		::System::Int32 nInUse; // 0xE0
		::System::Int32 last; // 0xE4
		::System::Int32 chPrev; // 0xE8

		::System::Void _ctor(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM__CTOR_OFFSET))(this, stream);
		}

		::System::Boolean get_IsStreamOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_GET_ISSTREAMOWNER_OFFSET))(this);
		}

		::System::Void set_IsStreamOwner(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SET_ISSTREAMOWNER_OFFSET))(this, value);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_WRITEBYTE_OFFSET))(this, value);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_CLOSE_OFFSET))(this);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Void MakeMaps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_MAKEMAPS_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_INITIALIZE_OFFSET))(this);
		}

		::System::Void InitBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_INITBLOCK_OFFSET))(this);
		}

		::System::Void EndBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_ENDBLOCK_OFFSET))(this);
		}

		::System::Void Complete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_COMPLETE_OFFSET))(this);
		}

		::System::Void BsSetStream(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_BSSETSTREAM_OFFSET))(this, stream);
		}

		::System::Void FillBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_FILLBUFFER_OFFSET))(this);
		}

		::System::Int32 BsR(::System::Int32 n)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_BSR_OFFSET))(this, n);
		}

		::System::Char BsGetUChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_BSGETUCHAR_OFFSET))(this);
		}

		::System::Int32 BsGetIntVS(::System::Int32 numBits)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_BSGETINTVS_OFFSET))(this, numBits);
		}

		::System::Int32 BsGetInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_BSGETINT32_OFFSET))(this);
		}

		::System::Void RecvDecodingTables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_RECVDECODINGTABLES_OFFSET))(this);
		}

		::System::Void GetAndMoveToFrontDecode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_GETANDMOVETOFRONTDECODE_OFFSET))(this);
		}

		::System::Void SetupBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETUPBLOCK_OFFSET))(this);
		}

		::System::Void SetupRandPartA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETUPRANDPARTA_OFFSET))(this);
		}

		::System::Void SetupNoRandPartA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETUPNORANDPARTA_OFFSET))(this);
		}

		::System::Void SetupRandPartB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETUPRANDPARTB_OFFSET))(this);
		}

		::System::Void SetupRandPartC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETUPRANDPARTC_OFFSET))(this);
		}

		::System::Void SetupNoRandPartB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETUPNORANDPARTB_OFFSET))(this);
		}

		::System::Void SetupNoRandPartC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETUPNORANDPARTC_OFFSET))(this);
		}

		::System::Void SetDecompressStructureSizes(::System::Int32 newSize100k)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_SETDECOMPRESSSTRUCTURESIZES_OFFSET))(this, newSize100k);
		}

		static ::System::Void CompressedStreamEOF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_COMPRESSEDSTREAMEOF_OFFSET))();
		}

		static ::System::Void BlockOverrun()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_BLOCKOVERRUN_OFFSET))();
		}

		static ::System::Void BadBlockHeader()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_BADBLOCKHEADER_OFFSET))();
		}

		static ::System::Void CrcError()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_CRCERROR_OFFSET))();
		}

		static ::System::Void HbCreateDecodeTables(::Il2CppArray<::System::Int32>* limit, ::Il2CppArray<::System::Int32>* baseArray, ::Il2CppArray<::System::Int32>* perm, ::Il2CppArray<::System::Char>* length, ::System::Int32 minLen, ::System::Int32 maxLen, ::System::Int32 alphaSize)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2INPUTSTREAM_HBCREATEDECODETABLES_OFFSET))(limit, baseArray, perm, length, minLen, maxLen, alphaSize);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace ICSharpCode::SharpZipLib::Checksums { class IChecksum; }

#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_ALLOCATECOMPRESSSTRUCTURES_OFFSET UNITYSDK_OFFSET(0x1EA36CD0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_BSFINISHEDWITHSTREAM_OFFSET UNITYSDK_OFFSET(0x1EA38C90)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_BSPUTINTVS_OFFSET UNITYSDK_OFFSET(0x1EA38D00)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_BSPUTINT_OFFSET UNITYSDK_OFFSET(0x1EA38930)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_BSPUTUCHAR_OFFSET UNITYSDK_OFFSET(0x1EA38760)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_BSSETSTREAM_OFFSET UNITYSDK_OFFSET(0x1EA36CA0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_BSW_OFFSET UNITYSDK_OFFSET(0x1EA38B40)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1EA37C60)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EA371B0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_DOREVERSIBLETRANSFORMATION_OFFSET UNITYSDK_OFFSET(0x1EA38800)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_ENDBLOCK_OFFSET UNITYSDK_OFFSET(0x1EA37D90)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_ENDCOMPRESSION_OFFSET UNITYSDK_OFFSET(0x1EA38390)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EA37140)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1EA38730)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_FULLGTU_OFFSET UNITYSDK_OFFSET(0x1EA3D660)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_GENERATEMTFVALUES_OFFSET UNITYSDK_OFFSET(0x1EA3CAE0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_GET_BYTESWRITTEN_OFFSET UNITYSDK_OFFSET(0x1EA38380)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1EA372D0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1EA372E0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1EA372F0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_GET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1EA372B0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1EA37320)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EA37350)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_HBASSIGNCODES_OFFSET UNITYSDK_OFFSET(0x1EA3CA00)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_HBMAKECODELENGTHS_OFFSET UNITYSDK_OFFSET(0x1EA3BDA0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_INITBLOCK_OFFSET UNITYSDK_OFFSET(0x1EA36FC0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EA36D80)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_MAINSORT_OFFSET UNITYSDK_OFFSET(0x1EA3E640)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_MAKEMAPS_OFFSET UNITYSDK_OFFSET(0x1EA37CC0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_MED3_OFFSET UNITYSDK_OFFSET(0x1EA3E620)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_MOVETOFRONTCODEANDSEND_OFFSET UNITYSDK_OFFSET(0x1EA38BE0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_PANIC_OFFSET UNITYSDK_OFFSET(0x1EA3BD50)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_QSORT3_OFFSET UNITYSDK_OFFSET(0x1EA3DC40)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_RANDOMISEBLOCK_OFFSET UNITYSDK_OFFSET(0x1EA3F4F0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x1EA37470)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1EA374C0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1EA373D0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_SENDMTFVALUES_OFFSET UNITYSDK_OFFSET(0x1EA38DA0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1EA37420)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_SET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1EA372C0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EA37380)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_SIMPLESORT_OFFSET UNITYSDK_OFFSET(0x1EA3D170)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_VSWAP_OFFSET UNITYSDK_OFFSET(0x1EA3DAD0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1EA376F0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_WRITERUN_OFFSET UNITYSDK_OFFSET(0x1EA37770)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1EA37510)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA36A80)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA36C80)

namespace ICSharpCode::SharpZipLib::BZip2
{
	inline static constexpr unsigned int BZip2OutputStream_TypeDefinitionIndex = 6773;

	class BZip2OutputStream : public ::System::IO::Stream
	{
	public:
		// static const ::System::Int32 SETMASK = 0x200000; // 0x0
		// static const ::System::Int32 CLEARMASK = 0xFFDFFFFF; // 0x0
		// static const ::System::Int32 GREATER_ICOST = 0xF; // 0x0
		// static const ::System::Int32 LESSER_ICOST = 0x0; // 0x0
		// static const ::System::Int32 SMALL_THRESH = 0x14; // 0x0
		// static const ::System::Int32 DEPTH_THRESH = 0xA; // 0x0
		// static const ::System::Int32 QSORT_STACK_SIZE = 0x3E8; // 0x0
		::Il2CppArray<::System::Char>* selector; // 0x28
		::Il2CppArray<::System::Byte>* block; // 0x30
		::Il2CppArray<::System::Int16>* szptr; // 0x38
		::Il2CppArray<::System::Int32>* zptr; // 0x40
		::Il2CppArray<::System::Char>* selectorMtf; // 0x48
		::Il2CppArray<::System::Boolean>* inUse; // 0x50
		::ICSharpCode::SharpZipLib::Checksums::IChecksum* mCrc; // 0x58
		::Il2CppArray<::System::Int32>* mtfFreq; // 0x60
		::Il2CppArray<::System::Int32>* quadrant; // 0x68
		::Il2CppArray<::System::Int32>* ftab; // 0x70
		::Il2CppArray<::System::Char>* unseqToSeq; // 0x78
		::Il2CppArray<::System::Char>* seqToUnseq; // 0x80
		::System::IO::Stream* baseStream; // 0x88
		::Il2CppArray<::System::Int32>* increments; // 0x90
		::System::UInt32 blockCRC; // 0x98
		::System::Int32 origPtr; // 0x9C
		::System::Int32 nInUse; // 0xA0
		::System::Int32 nMTF; // 0xA4
		::System::Int32 bytesOut; // 0xA8
		::System::Int32 workLimit; // 0xAC
		::System::Int32 blockSize100k; // 0xB0
		::System::Int32 nBlocksRandomised; // 0xB4
		::System::Int32 workFactor; // 0xB8
		::System::Int32 last; // 0xBC
		::System::Int32 bsLive; // 0xC0
		::System::UInt32 combinedCRC; // 0xC4
		::System::Int32 bsBuff; // 0xC8
		::System::Int32 allowableBlockSize; // 0xCC
		::System::Int32 workDone; // 0xD0
		::System::Int32 runLength; // 0xD4
		::System::Int32 currentChar; // 0xD8
		::System::Boolean isStreamOwner; // 0xDC
		::System::Boolean firstAttempt; // 0xDD
		::System::Boolean disposed_; // 0xDE
		::System::Boolean blockRandomised; // 0xDF

		::System::Void _ctor(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM__CTOR_OFFSET))(this, stream);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::Int32 blockSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM__CTOR_1_OFFSET))(this, stream, blockSize);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_FINALIZE_OFFSET))(this);
		}

		::System::Boolean get_IsStreamOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_GET_ISSTREAMOWNER_OFFSET))(this);
		}

		::System::Void set_IsStreamOwner(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_SET_ISSTREAMOWNER_OFFSET))(this, value);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Int32 ReadByte()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_WRITEBYTE_OFFSET))(this, value);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_CLOSE_OFFSET))(this);
		}

		::System::Void MakeMaps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_MAKEMAPS_OFFSET))(this);
		}

		::System::Void WriteRun()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_WRITERUN_OFFSET))(this);
		}

		::System::Int32 get_BytesWritten()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_GET_BYTESWRITTEN_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_INITIALIZE_OFFSET))(this);
		}

		::System::Void InitBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_INITBLOCK_OFFSET))(this);
		}

		::System::Void EndBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_ENDBLOCK_OFFSET))(this);
		}

		::System::Void EndCompression()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_ENDCOMPRESSION_OFFSET))(this);
		}

		::System::Void BsSetStream(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_BSSETSTREAM_OFFSET))(this, stream);
		}

		::System::Void BsFinishedWithStream()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_BSFINISHEDWITHSTREAM_OFFSET))(this);
		}

		::System::Void BsW(::System::Int32 n, ::System::Int32 v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_BSW_OFFSET))(this, n, v);
		}

		::System::Void BsPutUChar(::System::Int32 c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_BSPUTUCHAR_OFFSET))(this, c);
		}

		::System::Void BsPutint(::System::Int32 u)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_BSPUTINT_OFFSET))(this, u);
		}

		::System::Void BsPutIntVS(::System::Int32 numBits, ::System::Int32 c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_BSPUTINTVS_OFFSET))(this, numBits, c);
		}

		::System::Void SendMTFValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_SENDMTFVALUES_OFFSET))(this);
		}

		::System::Void MoveToFrontCodeAndSend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_MOVETOFRONTCODEANDSEND_OFFSET))(this);
		}

		::System::Void SimpleSort(::System::Int32 lo, ::System::Int32 hi, ::System::Int32 d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_SIMPLESORT_OFFSET))(this, lo, hi, d);
		}

		::System::Void Vswap(::System::Int32 p1, ::System::Int32 p2, ::System::Int32 n)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_VSWAP_OFFSET))(this, p1, p2, n);
		}

		::System::Void QSort3(::System::Int32 loSt, ::System::Int32 hiSt, ::System::Int32 dSt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_QSORT3_OFFSET))(this, loSt, hiSt, dSt);
		}

		::System::Void MainSort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_MAINSORT_OFFSET))(this);
		}

		::System::Void RandomiseBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_RANDOMISEBLOCK_OFFSET))(this);
		}

		::System::Void DoReversibleTransformation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_DOREVERSIBLETRANSFORMATION_OFFSET))(this);
		}

		::System::Boolean FullGtU(::System::Int32 i1, ::System::Int32 i2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_FULLGTU_OFFSET))(this, i1, i2);
		}

		::System::Void AllocateCompressStructures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_ALLOCATECOMPRESSSTRUCTURES_OFFSET))(this);
		}

		::System::Void GenerateMTFValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_GENERATEMTFVALUES_OFFSET))(this);
		}

		static ::System::Void Panic()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_PANIC_OFFSET))();
		}

		static ::System::Void HbMakeCodeLengths(::Il2CppArray<::System::Char>* len, ::Il2CppArray<::System::Int32>* freq, ::System::Int32 alphaSize, ::System::Int32 maxLen)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Char>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_HBMAKECODELENGTHS_OFFSET))(len, freq, alphaSize, maxLen);
		}

		static ::System::Void HbAssignCodes(::Il2CppArray<::System::Int32>* code, ::Il2CppArray<::System::Char>* length, ::System::Int32 minLen, ::System::Int32 maxLen, ::System::Int32 alphaSize)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_HBASSIGNCODES_OFFSET))(code, length, minLen, maxLen, alphaSize);
		}

		static ::System::Byte Med3(::System::Byte a, ::System::Byte b, ::System::Byte c)
		{
			return ((::System::Byte(*)(::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2OUTPUTSTREAM_MED3_OFFSET))(a, b, c);
		}
	};
}
